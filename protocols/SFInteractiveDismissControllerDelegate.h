
@protocol SFInteractiveDismissControllerDelegate <NSObject>

@optional

- (void)interactiveDismissControllerDidBegin:(SFInteractiveDismissController *)arg1;
- (void)interactiveDismissControllerDidCancel:(SFInteractiveDismissController *)arg1;
- (void)interactiveDismissControllerDidEnd:(SFInteractiveDismissController *)arg1;

@end
