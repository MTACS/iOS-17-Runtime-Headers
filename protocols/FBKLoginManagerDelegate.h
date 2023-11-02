
@protocol FBKLoginManagerDelegate <NSObject>

@required

- (void)didLogInWithLoginUserInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: FBKSUserLoginInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)didLogOutWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
