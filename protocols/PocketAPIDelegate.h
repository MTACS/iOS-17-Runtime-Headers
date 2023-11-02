
@protocol PocketAPIDelegate <NSObject>

@optional

- (void)pocketAPI:(PocketAPI *)arg1 failedToSaveURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)pocketAPI:(PocketAPI *)arg1 hadLoginError:(NSError *)arg2;
- (void)pocketAPI:(PocketAPI *)arg1 receivedRequestToken:(NSString *)arg2;
- (void)pocketAPI:(PocketAPI *)arg1 receivedResponse:(NSDictionary *)arg2 forAPIMethod:(NSString *)arg3 error:(NSError *)arg4;
- (void)pocketAPI:(void *)arg1 requestedOpenURL:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: PocketAPI *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)pocketAPI:(PocketAPI *)arg1 savedURL:(NSURL *)arg2;
- (void)pocketAPIDidFinishLogin:(PocketAPI *)arg1;
- (void)pocketAPIDidStartLogin:(PocketAPI *)arg1;
- (void)pocketAPILoggedIn:(PocketAPI *)arg1;

@end
