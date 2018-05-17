/* http://recharts.org/en-US/api/CartesianAxis */
open Utils;

[@bs.module "recharts"]
external cartesianAxis : ReasonReact.reactClass = "CartesianAxis";

[@bs.obj]
external makeProps :
  (
    ~axisLine: 'axisLine=?,
    ~height: int=?,
    ~interval: 'interval=?,
    ~label: 'label=?,
    ~minTickGap: int=?,
    ~mirror: bool=?,
    ~orientation: [@bs.string] [ | `top | `bottom | `left | `right]=?,
    ~tick: 'tick=?,
    ~tickLine: 'tickLine=?,
    ~tickMargin: int=?,
    ~tickSize: int=?,
    ~viewBox: viewBox=?,
    ~width: int=?,
    ~x: int=?,
    ~y: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~axisLine=?,
      ~height=?,
      ~interval=?,
      ~label=?,
      ~minTickGap=?,
      ~mirror=?,
      ~orientation=?,
      ~tick=?,
      ~tickLine=?,
      ~tickMargin=?,
      ~tickSize=?,
      ~viewBox=?,
      ~width=?,
      ~x=?,
      ~y=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cartesianAxis,
    ~props=
      makeProps(
        ~axisLine?,
        ~height?,
        ~interval?,
        ~label?,
        ~minTickGap?,
        ~mirror?,
        ~orientation?,
        ~tick?,
        ~tickLine?,
        ~tickMargin?,
        ~tickSize?,
        ~viewBox?,
        ~width?,
        ~x?,
        ~y?,
        (),
      ),
    children,
  );
