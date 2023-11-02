
@protocol POServiceProtocol <NSObject>

@required

- (void)getLoginTypeForUser:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)passwordDidChangeForUsername:(void *)arg1 passwordContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)performLocalPasswordLogin:(void *)arg1 passwordContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)performPasswordLogin:(void *)arg1 passwordContext:(void *)arg2 updateLocalAccountPassword:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)retainContextForUserName:(void *)arg1 context:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveCredentialForUserName:(void *)arg1 passwordContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)screenDidUnlockWithCredentialContext:(void *)arg1 smartCardContext:(void *)arg2 tokenId:(void *)arg3 atLogin:(void *)arg4 tokenUnlock:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSData *, NSData *, NSString *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateLocalAccountPassword:(void *)arg1 passwordContextData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)verifyPasswordLogin:(void *)arg1 passwordContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*

@end
