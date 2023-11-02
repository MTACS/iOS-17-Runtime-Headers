
@protocol RemoteUIControllerDelegate <NSObject>

@optional

- (RUIPage *)remoteUIController:(RemoteUIController *)arg1 createPageWithName:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didDismissModalNavigationWithObjectModels:(NSArray *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didFinishLoadWithError:(NSError *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didFinishLoadWithError:(NSError *)arg2 forRequest:(NSURLRequest *)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didPresentObjectModel:(RUIObjectModel *)arg2 modally:(bool)arg3;
- (void)remoteUIController:(void *)arg1 didReceiveChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: RemoteUIController *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2 forRequest:(NSURLRequest *)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveObjectModel:(RUIObjectModel *)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didRefreshObjectModel:(RUIObjectModel *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didRemoveObjectModel:(RUIObjectModel *)arg2;
- (void)remoteUIController:(void *)arg1 loadResourcesForObjectModel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: RemoteUIController *, RUIObjectModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)remoteUIController:(RemoteUIController *)arg1 objectModel:(RUIObjectModel *)arg2 shouldDisplayNamedElement:(RUIElement *)arg3 page:(RUIPage *)arg4;
- (bool)remoteUIController:(RemoteUIController *)arg1 shouldLoadRequest:(NSMutableURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)remoteUIController:(void *)arg1 shouldLoadRequest:(void *)arg2 redirectResponse:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 10: RemoteUIController *, NSMutableURLRequest *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remoteUIController:(RemoteUIController *)arg1 willLoadRequest:(NSMutableURLRequest *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 willPresentModalNavigationController:(UINavigationController *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 willPresentObjectModel:(RUIObjectModel *)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(RemoteUIController *)arg1;

@end
