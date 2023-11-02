
@interface _ASDevice : NSObject

+ (long long)_localAuthenticationBiometricsAvailability;
+ (long long)biometryType;
+ (int)deviceClass;
+ (bool)isBiometricAuthenticationAvailable;
+ (bool)isCABLEClient;
+ (bool)isPad;
+ (bool)shouldRequireLocalAuthenticationForPasswords;
+ (bool)shouldRequireLocalAuthenticationForPlatformCredentials;

@end
