
@interface MDMManagedAssetManager : NSObject

+ (void)_promptUserForiTunesAccount:(id)arg1 accountNameEditable:(bool)arg2 canCreateNewAccount:(bool)arg3 assertion:(id)arg4 completionBlock:(id /* block */)arg5;
+ (void)promptUserToLoginToiTunesIfNeededTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(id /* block */)arg4;

@end
