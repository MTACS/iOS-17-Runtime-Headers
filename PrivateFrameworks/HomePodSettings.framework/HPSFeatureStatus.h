
@interface HPSFeatureStatus : NSObject

+ (bool)isAnalyticsAndImprovementSettingsEnabled;
+ (bool)isHomePodBetaEnrollmentEnabled;
+ (bool)isLocalSettingsEnabled;
+ (bool)isPyreEnabled;
+ (bool)isSiriSettingsAssertionsEnabled;

@end
