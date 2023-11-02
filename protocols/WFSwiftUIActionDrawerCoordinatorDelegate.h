
@protocol WFSwiftUIActionDrawerCoordinatorDelegate <NSObject>

@required

- (double)actionCanvasWidthForSwiftUIActionDrawerCoordinator:(WFSwiftUIActionDrawerCoordinator *)arg1;
- (void)swiftUIActionDrawerCoordinator:(WFSwiftUIActionDrawerCoordinator *)arg1 didAppendAction:(WFAction *)arg2;

@end
