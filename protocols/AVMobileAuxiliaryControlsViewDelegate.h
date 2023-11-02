
@protocol AVMobileAuxiliaryControlsViewDelegate <NSObject>

@required

- (UIMenuElement *)auxiliaryControlsView:(AVMobileAuxiliaryControlsView *)arg1 menuElementForControl:(AVMobileAuxiliaryControl *)arg2;

@optional

- (void)auxiliaryControlsViewDidEndShowingOverflowMenu:(AVMobileAuxiliaryControlsView *)arg1;
- (void)auxiliaryControlsViewWillBeginShowingOverflowMenu:(AVMobileAuxiliaryControlsView *)arg1;

@end
