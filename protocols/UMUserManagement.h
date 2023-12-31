
@protocol UMUserManagement <NSObject>

@required

- (bool)canAccessUserProperties;
- (void)createUser:(void *)arg1 passcodeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: UMUser *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (UMUser *)currentUser;
- (void)deleteUser:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: UMUser *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disableUser:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: UMUser *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)isLoginSession;
- (bool)isMultiUser;
- (bool)isSharedIPad;
- (void)loadUser:(void *)arg1 passcodeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: UMUser *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (UMUser *)loginUser;
- (unsigned long long)maxNumberOfUsers;
- (void)registerUserListUpdateObserver:(id <UMUserListUpdateObserver>)arg1;
- (unsigned long long)userQuotaSize;

@end
