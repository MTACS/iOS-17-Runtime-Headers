
@protocol FPUIActionRemoteContextDelegate <NSObject>

@required

- (void)remoteActionContext:(void *)arg1 didEncounterError:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: FPUIActionRemoteContext *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteActionContextDidFinishAction:(FPUIActionRemoteContext *)arg1 userInfo:(NSDictionary *)arg2 error:(NSError *)arg3;

@end
