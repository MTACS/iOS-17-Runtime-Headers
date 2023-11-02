
@interface AMSAcknowledgePrivacyTask : AMSTask {
    ACAccount * _account;
    NSSet * _privacyIdentifiers;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) NSSet *privacyIdentifiers;

+ (id)_accountStoreForPrivacyIdentifier:(id)arg1;
+ (id)_appleArcadePrivacyIdentifier;
+ (id)_appleIDPrivacyIdentifier;
+ (id)_appleMusicAppPrivacyIdentifier;
+ (id)_appleTVAppPrivacyIdentifier;
+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)arg1;
+ (id)_multiplexPrivacyIdentifier:(id)arg1 contentVersion:(unsigned long long)arg2;
+ (id)_storePrivacyIdentifiers;
+ (id)_valueForPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 account:(id)arg2;
+ (bool)acknowledgementNeededForPrivacyIdentifier:(id)arg1;
+ (bool)acknowledgementNeededForPrivacyIdentifier:(id)arg1 account:(id)arg2;
+ (bool)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1;
+ (bool)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 account:(id)arg2;
+ (bool)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 account:(id)arg2 minimumVersion:(id)arg3;
+ (bool)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 minimumVersion:(id)arg2;
+ (bool)hasRejectedPrivacyIdentifier:(id)arg1;
+ (bool)hasRejectedPrivacyIdentifier:(id)arg1 account:(id)arg2;

- (void).cxx_destruct;
- (id)_updatePrivacyWithAcknowledgementVersions:(id)arg1;
- (id)account;
- (id)acknowledgePrivacy;
- (id)initWithPrivacyIdentifier:(id)arg1;
- (id)initWithPrivacyIdentifier:(id)arg1 account:(id)arg2;
- (id)initWithPrivacyIdentifiers:(id)arg1;
- (id)initWithPrivacyIdentifiers:(id)arg1 account:(id)arg2;
- (id)privacyIdentifiers;
- (id)rejectPrivacy;
- (void)setAccount:(id)arg1;
- (void)setPrivacyIdentifiers:(id)arg1;

@end
