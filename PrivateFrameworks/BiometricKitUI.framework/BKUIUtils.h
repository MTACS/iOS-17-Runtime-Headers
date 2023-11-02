
@interface BKUIUtils : NSObject

+ (long long)activeInterfaceOrientationForView:(id)arg1;
+ (bool)containerEnrollmentStyleEnabled;
+ (id)nameForMessage:(unsigned int)arg1;
+ (void)resetScreenDimming;
+ (void)vibrateForBiometricEvent:(bool)arg1;
+ (void)vibrateWithIntensity:(float)arg1 withPattern:(id)arg2;

@end
