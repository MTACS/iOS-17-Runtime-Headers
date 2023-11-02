
@protocol AKPrivateEmailDaemonProtocol <NSObject>

@required

- (void)deletePrivateEmailDatabaseWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchPrivateEmailForAltDSID:(void *)arg1 withKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKPrivateEmail *, NSError *, void*
- (void)fetchPrivateEmailWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKPrivateEmailContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKPrivateEmail *, NSError *, void*
- (void)fetchSignInWithApplePrivateEmailWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKPrivateEmailContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKPrivateEmail *, NSError *, void*
- (void)getContextForRequestContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKPrivateEmailContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKPrivateEmailContext *, NSError *, void*
- (void)listAllPrivateEmailsForAltDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)lookupPrivateEmailForAltDSID:(void *)arg1 withKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKPrivateEmail *, NSError *, void*
- (void)lookupPrivateEmailWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKPrivateEmailContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKPrivateEmail *, NSError *, void*
- (void)privateEmailListVersionWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)registerPrivateEmailForAltDSID:(void *)arg1 withKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKPrivateEmail *, NSError *, void*
- (void)registerPrivateEmailWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKPrivateEmailContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKPrivateEmail *, NSError *, void*
- (void)removePrivateEmailKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
