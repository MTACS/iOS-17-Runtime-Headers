
@protocol REElementActionDelegate <NSObject>

@optional

- (void)elementAction:(REElementAction *)arg1 didFinishTask:(bool)arg2;
- (void)elementAction:(REElementAction *)arg1 wantsToPerformTapActionForComplicationSlot:(NSString *)arg2;
- (void)elementAction:(REElementAction *)arg1 wantsViewControllerDisplayed:(UIViewController *)arg2;

@end
