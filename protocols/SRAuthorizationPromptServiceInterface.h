
@protocol SRAuthorizationPromptServiceInterface <NSObject>

@required

- (void)requestAuthorizationForBundle:(NSString *)arg1 services:(NSSet *)arg2;
- (void)requestAuthorizationMigrationForBundle:(NSString *)arg1 services:(NSSet *)arg2;
- (void)showAppsAndStudies;
- (void)showFirstRunOnboarding;
- (void)showResearchData;
- (void)showStudyAuthorizationForBundlePath:(NSString *)arg1;

@end
