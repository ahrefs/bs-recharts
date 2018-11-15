/* http://recharts.org/en-US/api/Legend */
open BsRecharts__Utils;

[@bs.module "recharts"] external reactClass: ReasonReact.reactClass = "Legend";

[@bs.obj]
external makeProps:
  (
    ~align: [@bs.string] [ | `left | `center | `right]=?,
    ~chartHeight: int=?,
    ~chartWidth: int=?,
    ~content: 'content=?,
    ~height: int=?,
    ~iconSize: int=?,
    ~iconType: [@bs.string] [
                 | `line
                 | `square
                 | `rect
                 | `circle
                 | `cross
                 | `diamond
                 | `star
                 | `triangle
                 | `wye
               ]
                 =?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~payload: array(Js.t({..}))=?,
    ~verticalAlign: [@bs.string] [ | `top | `middle | `bottom]=?,
    ~width: int=?,
    ~wrapperStyle: Js.t({..})=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~align=?,
      ~chartHeight=?,
      ~chartWidth=?,
      ~content=?,
      ~height=?,
      ~iconSize=?,
      ~iconType=?,
      ~layout=?,
      ~margin=?,
      ~onClick=?,
      ~onMouseDown=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~onMouseOut=?,
      ~onMouseOver=?,
      ~onMouseUp=?,
      ~payload=?,
      ~verticalAlign=?,
      ~width=?,
      ~wrapperStyle=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~align?,
        ~chartHeight?,
        ~chartWidth?,
        ~content?,
        ~height?,
        ~iconSize?,
        ~iconType?,
        ~layout?,
        ~margin?,
        ~onClick?,
        ~onMouseDown?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~onMouseOut?,
        ~onMouseOver?,
        ~onMouseUp?,
        ~payload?,
        ~verticalAlign?,
        ~width?,
        ~wrapperStyle?,
        (),
      ),
    children,
  );
