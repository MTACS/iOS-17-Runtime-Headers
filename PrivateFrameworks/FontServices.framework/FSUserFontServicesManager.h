
@interface FSUserFontServicesManager : NSObject

+ (void)GSFontEnableOrDisablePersistentURLs:(id)arg1 forProfileFonts:(bool)arg2 enabled:(bool)arg3 suspend:(bool)arg4 withReply:(id /* block */)arg5;
+ (void)GSFontRegisterPersistentURLs:(id)arg1 enabled:(bool)arg2 forProfileFonts:(bool)arg3 withReply:(id /* block */)arg4;
+ (void)GSFontUnregisterPersistentURLs:(id)arg1 forProfileFonts:(bool)arg2 withReply:(id /* block */)arg3;
+ (id)_UserFontServicesConnection;

@end
