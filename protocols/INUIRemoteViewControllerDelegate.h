
@protocol INUIRemoteViewControllerDelegate <NSObject>

@optional

- (NSArray *)interfaceSectionsForRemoteViewController:(INUIRemoteViewController *)arg1;
- (NSDictionary *)maximumSizesBySystemVersionForRemoteViewController:(INUIRemoteViewController *)arg1;
- (NSDictionary *)minimumSizesBySystemVersionForRemoteViewController:(INUIRemoteViewController *)arg1;
- (void)remoteViewController:(INUIRemoteViewController *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)remoteViewControllerServiceDidTerminate:(INUIRemoteViewController *)arg1;
- (void)remoteViewControllerWillBeginEditing:(INUIRemoteViewController *)arg1;

@end
