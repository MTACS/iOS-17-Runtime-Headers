
@protocol SBSBackgroundActivityCoordinatorDelegate <NSObject>

@required

- (void)statusBarCoordinator:(SBSBackgroundActivityCoordinator *)arg1 invalidatedRegistrationWithError:(NSError *)arg2;

@optional

- (bool)statusBarCoordinator:(void *)arg1 receivedTapWithContext:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 7: SBSBackgroundActivityCoordinator *, <SBSStatusBarBackgroundActivityTapContext> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
