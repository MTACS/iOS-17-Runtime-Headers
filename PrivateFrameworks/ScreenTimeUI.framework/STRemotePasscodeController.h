
@interface STRemotePasscodeController : NSObject

+ (id)_xpcConnection;
+ (void)activateRemotePINUI;
+ (bool)isRestrictionsPasscodeSet;

@end
