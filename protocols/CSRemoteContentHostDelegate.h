
@protocol CSRemoteContentHostDelegate <NSObject>

@required

- (void)didChangeRemoteHostContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didChangeRemotePreferences:(SBSRemoteContentPreferences *)arg1;
- (bool)prefersInlineForPreferences:(SBSRemoteContentPreferences *)arg1;
- (double)remoteContentComplicationHeightInset;
- (void)remoteContentHostViewController:(CSRemoteContentHostViewController *)arg1 didTerminateWithError:(NSError *)arg2;

@end
