
@protocol CSRemoteContentViewControllerProtocol <NSObject>

@required

- (long long)contentPresentationType;
- (<CSRemoteContentViewControllerDelegate> *)delegate;
- (bool)dismissForDismissType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (CSRemoteContentHostViewController *)hostViewController;
- (long long)preferredNotificationListMode;
- (void)remoteDidChangeStyle;
- (void)setDelegate:(id <CSRemoteContentViewControllerDelegate>)arg1;
- (void)setHostViewController:(CSRemoteContentHostViewController *)arg1;
- (bool)suppressesDismissalForNotification;

@optional

- (void)didChangeRemoteHostContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
