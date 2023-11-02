
@interface CLFPrivacyDisclosureChecker : NSObject {
    PDCPreflightManager * _privacyPreflightManager;
}

@property (nonatomic, readonly) PDCPreflightManager *privacyPreflightManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)privacyPreflightManager;
- (id)relevantBundleIdentifierForBundleIdentifier:(id)arg1;
- (bool)requiresPreflightForBundleIdentifier:(id)arg1;

@end
