
@protocol TPSAppControllerDelegate <NSObject>

@required

- (void)appControllerContentUpdated:(TPSAppController *)arg1;

@optional

- (void)appController:(TPSAppController *)arg1 loadingContent:(bool)arg2;
- (void)appControllerNetworkStateDidChangeToReachable:(TPSAppController *)arg1;
- (void)appControllerTipViewed:(TPSAppController *)arg1 tipIdentifier:(NSString *)arg2 collectionIdentifier:(NSString *)arg3;
- (void)appControllerUserUpdatedSavedTips:(TPSAppController *)arg1;

@end
