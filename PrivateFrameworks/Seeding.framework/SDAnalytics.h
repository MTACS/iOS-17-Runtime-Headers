
@interface SDAnalytics : NSObject

+ (void)deviceDidDeclineLegalAgreement;
+ (void)deviceDidEnrollInSeeding;
+ (void)deviceDidUnenrollFromSeeding;
+ (id)deviceIdentifier;

@end
