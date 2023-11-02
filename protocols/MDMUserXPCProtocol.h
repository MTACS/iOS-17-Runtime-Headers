
@protocol MDMUserXPCProtocol <NSObject, MDMSharedXPCProtocol, MDMClientProtocol>

@required

- (void)isAwaitingUserConfiguredWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)processUserRequest:(void *)arg1 encodeResponse:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, NSData *, void*

@end
