
@protocol HUControlPanelControllerDelegate <NSObject>

@optional

- (void)controlPanelController:(HUControlPanelController *)arg1 didEndPossibleWritesForControlItem:(HFControlItem *)arg2;
- (void)controlPanelController:(HUControlPanelController *)arg1 willBeginPossibleWritesForControlItem:(HFControlItem *)arg2;

@end
