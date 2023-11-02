
@protocol PKTextInputReserveSpaceControllerDelegate <NSObject>

@required

- (void)reserveSpaceController:(PKTextInputReserveSpaceController *)arg1 willFocusElement:(PKTextInputElement *)arg2;
- (void)reserveSpaceControllerIsActiveChanged:(PKTextInputReserveSpaceController *)arg1;
- (void)reserveSpaceControllerIsPlaceholderVisibleChanged:(PKTextInputReserveSpaceController *)arg1;

@end
