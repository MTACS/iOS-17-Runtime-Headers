
@protocol HUTriggerEventsModuleControllerDelegate <NSObject>

@required

- (void)_showEditorForTriggerBuilderItem:(HUTriggerBuilderItem *)arg1;
- (void)eventsModuleController:(HUTriggerEventsModuleController *)arg1 pushViewController:(UIViewController<HUPreloadableViewController> *)arg2;
- (void)eventsModuleControllerDidUpdateTriggerBuilder:(HUTriggerEventsModuleController *)arg1;

@end
