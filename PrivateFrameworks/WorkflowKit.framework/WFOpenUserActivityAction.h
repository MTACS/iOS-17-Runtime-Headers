
@interface WFOpenUserActivityAction : WFAction <WFStandaloneShortcutAction> {
    NSData * _activityData;
    NSData * _activityImageData;
    NSString * _activitySubtitle;
    NSString * _bundleIdentifier;
    INUserActivityDescriptor * _descriptor;
    NSString * _launchOrigin;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly, copy) NSData *activityData;
@property (nonatomic, readonly, copy) NSData *activityImageData;
@property (nonatomic, readonly, copy) NSString *activitySubtitle;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) INUserActivityDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *launchOrigin;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserActivity *userActivity;

+ (void)createActionWithIntent:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)createActionWithUserActivity:(id)arg1 appBundleIdentifier:(id)arg2 launchOrigin:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)userActivityActionWithShortcut:(id)arg1 launchOrigin:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)activityData;
- (id)activityImageData;
- (id)activitySubtitle;
- (id)appDescriptor;
- (bool)appResourceRequiresAppInstall;
- (id)associatedAppBundleIdentifier;
- (id)bundleIdentifier;
- (id)contentDestinationWithError:(id*)arg1;
- (id)descriptor;
- (id)disabledPlatformsForUserActivityWithType:(id)arg1;
- (void)generateShortcutRepresentation:(id /* block */)arg1;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)launchOrigin;
- (id)localizedName;
- (id)localizedSubtitle;
- (id)metricsIdentifier;
- (id)name;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)serializedParameters;
- (void)setDescriptor:(id)arg1;
- (void)setLaunchOrigin:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)updateAppDescriptorInDatabaseWithSelectedApp:(id)arg1;
- (void)updateAppDescriptorWithSelectedApp:(id)arg1;
- (id)userActivity;

@end
