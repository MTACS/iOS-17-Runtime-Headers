
@protocol AAUIGrandSlamRemoteUIPresenterDelegate <NSObject>

@required

- (void)remoteUIRequestComplete:(NSURLRequest *)arg1 error:(NSError *)arg2;

@optional

- (void)remoteUIDidDismiss:(RemoteUIController *)arg1;
- (void)remoteUIDidEndFlow:(RemoteUIController *)arg1;
- (void)remoteUIDidPresentObjectModel:(RUIObjectModel *)arg1 modally:(bool)arg2;
- (void)remoteUIDidReceiveHTTPResponse:(NSHTTPURLResponse *)arg1;
- (void)remoteUIWillLoadRequest:(NSMutableURLRequest *)arg1;
- (void)remoteUIWillPresentObjectModel:(RUIObjectModel *)arg1 modally:(bool)arg2;

@end
