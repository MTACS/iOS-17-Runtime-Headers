
@interface DNDMutableConfiguration : DNDConfiguration

@property (nonatomic, copy) NSDictionary *allowedApplicationIdentifiers;
@property (nonatomic) unsigned long long applicationConfigurationType;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic, copy) NSSet *deniedApplicationIdentifiers;
@property (nonatomic) unsigned long long hideApplicationBadges;
@property (nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (nonatomic, copy) DNDSenderConfiguration *senderConfiguration;
@property (nonatomic) unsigned long long senderConfigurationType;
@property (nonatomic) unsigned long long suppressionMode;
@property (nonatomic) unsigned long long suppressionType;

+ (id)configurationOfType:(unsigned long long)arg1;
+ (id)defaultConfiguration;

- (id)_configurationForApplicationIdentifier:(id)arg1;
- (bool)hasSecureData;
- (void)removeExceptionForApplication:(id)arg1;
- (void)removeExceptionForApplication:(id)arg1 thread:(id)arg2;
- (void)removeExceptionForApplicationIdentifier:(id)arg1;
- (void)removeExceptionForApplicationIdentifier:(id)arg1 thread:(id)arg2;
- (void)removeExceptionForContact:(id)arg1;
- (void)removeExceptionForContactGroup:(id)arg1;
- (void)removeExceptionForContactType:(unsigned long long)arg1;
- (void)removeExceptionForWebApplicationIdentifier:(id)arg1;
- (void)setAllowedApplicationIdentifiers:(id)arg1;
- (void)setAllowedApplications:(id)arg1;
- (void)setAllowedWebApplicationIdentifiers:(id)arg1;
- (void)setApplicationConfigurationType:(unsigned long long)arg1;
- (void)setCompatibilityVersion:(long long)arg1;
- (void)setDeniedApplicationIdentifiers:(id)arg1;
- (void)setDeniedApplications:(id)arg1;
- (void)setDeniedWebApplicationIdentifiers:(id)arg1;
- (void)setExceptionForApplication:(id)arg1;
- (void)setExceptionForApplication:(id)arg1 thread:(id)arg2;
- (void)setExceptionForApplicationIdentifier:(id)arg1;
- (void)setExceptionForApplicationIdentifier:(id)arg1 thread:(id)arg2;
- (void)setExceptionForContact:(id)arg1;
- (void)setExceptionForContactGroup:(id)arg1;
- (void)setExceptionForContactType:(unsigned long long)arg1;
- (void)setExceptionForWebApplicationIdentifier:(id)arg1;
- (void)setExceptionOfType:(unsigned long long)arg1 forApplication:(id)arg2;
- (void)setExceptionOfType:(unsigned long long)arg1 forApplication:(id)arg2 thread:(id)arg3;
- (void)setExceptionOfType:(unsigned long long)arg1 forApplicationIdentifier:(id)arg2;
- (void)setExceptionOfType:(unsigned long long)arg1 forApplicationIdentifier:(id)arg2 thread:(id)arg3;
- (void)setExceptionOfType:(unsigned long long)arg1 forContact:(id)arg2;
- (void)setExceptionOfType:(unsigned long long)arg1 forContactGroup:(id)arg2;
- (void)setExceptionOfType:(unsigned long long)arg1 forContactType:(unsigned long long)arg2;
- (void)setHideApplicationBadges:(unsigned long long)arg1;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)arg1;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)arg1 forApplication:(id)arg2;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)arg1 forApplicationIdentifier:(id)arg2;
- (void)setPhoneCallBypassSettings:(id)arg1;
- (void)setSenderConfiguration:(id)arg1;
- (void)setSenderConfigurationType:(unsigned long long)arg1;
- (void)setSuppressionMode:(unsigned long long)arg1;
- (void)setSuppressionType:(unsigned long long)arg1;

@end
