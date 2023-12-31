
@interface SBUIPasscodeLockViewFactory : NSObject

+ (void)_commonInitPasscodeView:(id)arg1 forStyle:(int)arg2;
+ (id)_defaultPasscodeBiometricResource;
+ (id)_passcodeLockViewForStyle:(int)arg1 withLightStyle:(bool)arg2;
+ (id)installTonightPasscodeLockViewForUsersCurrentStyle;
+ (id)lightPasscodeLockViewForStyle:(int)arg1;
+ (id)lightPasscodeLockViewForUsersCurrentStyle;
+ (id)passcodeLockViewForStyle:(int)arg1;
+ (id)passcodeLockViewForUsersCurrentStyle;
+ (void)setPasscodeBiometricResource:(id)arg1;

@end
