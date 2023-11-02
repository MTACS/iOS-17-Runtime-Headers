
@protocol FPUIActionRemoteContextProtocol <NSObject>

@required

- (void)_completeRequestWithUserInfo:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)_didEncounterError:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_openExtensionURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
