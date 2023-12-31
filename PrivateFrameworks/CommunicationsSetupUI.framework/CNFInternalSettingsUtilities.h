
@interface CNFInternalSettingsUtilities : NSObject

+ (id)IDSEnvironment;
+ (id)currentInternalSettingsBundle;
+ (bool)isViceroyLoggingEnabled;
+ (void)killEverything;
+ (void)killFaceTime;
+ (void)killImagent;
+ (void)killImavagent;
+ (void)killMediaServerd;
+ (void)killMobilePhone;
+ (void)killMobileSMS;
+ (void)nukeKeychain;
+ (void)setCurrentInternalSettingsBundle:(id)arg1;
+ (void)setIDSEnvironment:(id)arg1;
+ (void)setViceroyLoggingEnabled:(bool)arg1;
+ (void)signOutAllAccounts;
+ (void)syncImagentLogSettings;

@end
