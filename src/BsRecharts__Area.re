// http://recharts.org/en-US/api/Area

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~_type: [@bs.string] [
              | `basis
              | `basisClosed
              | `basisOpen
              | `linear
              | `linearClosed
              | `natural
              | `monotoneX
              | `monotoneY
              | `monotone
              | `step
              | `stepBefore
              | `stepAfter
            ]
              =?,
    ~activeDot: 'activeDot=?,
    ~animationBegin: int=?,
    ~animationDuration: int=?,
    ~animationEasing: [@bs.string] [
                        | `ease
                        | [@bs.as "ease-in"] `easeIn
                        | [@bs.as "ease-out"] `easeOut
                        | [@bs.as "ease-in-out"] `easeInOut
                        | `linear
                      ]
                        =?,
    ~baseLine: 'baseLine=?,
    ~connectNulls: bool=?,
    ~className: string=?,
    ~dataKey: 'dataKey,
    ~dot: 'dot=?,
    ~fill: string=?,
    ~fillOpacity: float=?,
    ~id: string=?,
    ~isAnimationActive: bool=?,
    ~label: 'label=?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~legendType: [@bs.string] [
                   | `line
                   | `square
                   | `rect
                   | `circle
                   | `cross
                   | `diamond
                   | `square
                   | `star
                   | `triangle
                   | `wye
                 ]
                   =?,
    ~name: string=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~points: array(Js.t({..}))=?,
    ~stackId: string=?,
    ~stroke: string=?,
    ~strokeWidth: int=?,
    ~unit: string=?,
    ~xAxisId: string=?,
    ~yAxisId: string=?
  ) =>
  React.element =
  "Area";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~_type=?,
        ~activeDot=?,
        ~animationBegin=?,
        ~animationDuration=?,
        ~animationEasing=?,
        ~baseLine=?,
        ~connectNulls=?,
        ~className=?,
        ~dataKey,
        ~dot=?,
        ~fill=?,
        ~fillOpacity=?,
        ~id=?,
        ~isAnimationActive=?,
        ~label=?,
        ~layout=?,
        ~legendType=?,
        ~name=?,
        ~onClick=?,
        ~onMouseDown=?,
        ~onMouseEnter=?,
        ~onMouseLeave=?,
        ~onMouseMove=?,
        ~onMouseOut=?,
        ~onMouseOver=?,
        ~onMouseUp=?,
        ~points=?,
        ~stackId=?,
        ~stroke=?,
        ~strokeWidth=?,
        ~unit=?,
        ~xAxisId=?,
        ~yAxisId=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~_type?,
        ~activeDot?,
        ~animationBegin?,
        ~animationDuration?,
        ~animationEasing?,
        ~baseLine?,
        ~connectNulls?,
        ~className?,
        ~dataKey,
        ~dot?,
        ~fill?,
        ~fillOpacity?,
        ~id?,
        ~isAnimationActive?,
        ~label?,
        ~layout?,
        ~legendType?,
        ~name?,
        ~onClick?,
        ~onMouseDown?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~onMouseOut?,
        ~onMouseOver?,
        ~onMouseUp?,
        ~points?,
        ~stackId?,
        ~stroke?,
        ~strokeWidth?,
        ~unit?,
        ~xAxisId?,
        ~yAxisId?,
        (),
      ),
      children,
    );
};
