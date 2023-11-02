
@protocol AVTCollapsibleHeaderControllerDelegate <NSObject>

@optional

- (void)collapsibleHeaderController:(AVTCollapsibleHeaderController *)arg1 didUpdateHeaderToHeight:(double)arg2;
- (void)collapsibleHeaderController:(AVTCollapsibleHeaderController *)arg1 isUpdatingHeaderWithIncrementalHeight:(double)arg2;
- (void)collapsibleHeaderController:(AVTCollapsibleHeaderController *)arg1 willUpdateHeaderToHeight:(double)arg2;

@end
