
@protocol HUQuickControlColorInteractionCoordinatorDelegate <HUQuickControlInteractionCoordinatorDelegate>

@required

- (void)interactionCoordinator:(HUQuickControlColorInteractionCoordinator *)arg1 colorPaletteDidChange:(HFColorPalette *)arg2;
- (void)interactionCoordinator:(HUQuickControlColorInteractionCoordinator *)arg1 didSelectColorAtIndexPath:(NSIndexPath *)arg2;
- (void)presentFullColorViewForInteractionCoordinator:(HUQuickControlColorInteractionCoordinator *)arg1 selectedColorIndexPath:(NSIndexPath *)arg2;

@end
