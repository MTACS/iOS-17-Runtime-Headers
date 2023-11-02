
@protocol SBHWidgetSheetViewControlling

@required

- (<SBHWidgetSheetViewControllerPresenter> *)presenter;
- (NSMutableDictionary *)userInfo;

@optional

- (bool)hidesPresenterTitledButtons;
- (NSString *)nonEditingStatusBarHidingReason;

@end
