
@interface FBKLicenseAgreement : NSObject

+ (void)agreeToCurrentLicenseAgreement;
+ (id)currentLicenseAgreement;
+ (bool)hasAgreedToCurrentLicenseAgreement;

@end
