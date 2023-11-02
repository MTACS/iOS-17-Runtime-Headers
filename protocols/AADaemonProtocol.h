
@protocol AADaemonProtocol

@required

- (void)cacheLoginResponse:(void *)arg1 forAccount:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: AALoginAccountResponse *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchCachedLoginResponseForAccount:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AALoginAccountResponse *, NSError *, void*
- (void)handleAppleAccountDeleteForAccount:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleMarkedForSignOutForAccount:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
