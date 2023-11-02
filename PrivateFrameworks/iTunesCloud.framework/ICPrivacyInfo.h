
@interface ICPrivacyInfo : NSObject {
    NSMutableDictionary * _cache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _observers;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) bool privacyAcknowledgementRequiredForMedia;
@property (nonatomic, readonly) bool privacyAcknowledgementRequiredForMusic;

+ (id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)arg1;
+ (id)sharedPrivacyInfo;
+ (id)sharedPrivacyInfoForUserIdentity:(id)arg1;

- (void).cxx_destruct;
- (id)_accountForPrivacyInfo;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (bool)_privacyAcknowledgementRequiredForIdentifier:(id)arg1;
- (bool)_queryPrivacyAcknowledgementRequiredForIdentifier:(id)arg1;
- (void)_updateForPrivacyAcknowledgementChanged;
- (void)acknowledgePrivacyPolicyForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)beginObservingPrivacyAcknowledgementForIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (id)description;
- (void)endObservingPrivacyAcknowledgementForIdentifier:(id)arg1 withToken:(id)arg2;
- (id)init;
- (id)initWithIdentity:(id)arg1;
- (bool)privacyAcknowledgementRequiredForBundleIdentifier:(id)arg1;
- (bool)privacyAcknowledgementRequiredForIdentifier:(id)arg1;
- (bool)privacyAcknowledgementRequiredForMedia;
- (bool)privacyAcknowledgementRequiredForMusic;

@end
