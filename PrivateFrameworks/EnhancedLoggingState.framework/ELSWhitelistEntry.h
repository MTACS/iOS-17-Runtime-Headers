
@interface ELSWhitelistEntry : NSObject {
    NSString * _bundleIdentifier;
    NSString * _descriptionLocalizationKey;
    NSString * _displayNameLocalizationKey;
    NSString * _parameterName;
    NSArray * _platformAvailability;
    bool  _requiresFollowup;
    bool  _retry;
    NSString * _sensitiveInformationLocalizationKey;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *descriptionLocalizationKey;
@property (nonatomic, retain) NSString *displayNameLocalizationKey;
@property (nonatomic, retain) NSString *parameterName;
@property (nonatomic, readonly) NSArray *platformAvailability;
@property (nonatomic, readonly) bool requiresFollowup;
@property (nonatomic, readonly) bool retry;
@property (nonatomic, readonly) NSString *sensitiveInformationLocalizationKey;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)descriptionLocalizationKey;
- (id)displayNameLocalizationKey;
- (id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 baseLocalizationKey:(id)arg3 needsWAPIKeys:(bool)arg4 requiresFollowup:(bool)arg5 retry:(bool)arg6 platforms:(id)arg7;
- (id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 displayNameLocalizationKey:(id)arg3 descriptionLocalizationKey:(id)arg4 sensitiveInformationLocalizationKey:(id)arg5 needsWAPIKeys:(bool)arg6 requiresFollowup:(bool)arg7 retry:(bool)arg8 platforms:(id)arg9;
- (id)parameterName;
- (id)platformAvailability;
- (bool)requiresFollowup;
- (bool)retry;
- (id)sensitiveInformationLocalizationKey;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDescriptionLocalizationKey:(id)arg1;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (void)setParameterName:(id)arg1;

@end
