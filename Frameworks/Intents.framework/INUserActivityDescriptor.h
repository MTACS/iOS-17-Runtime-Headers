
@interface INUserActivityDescriptor : INAppDescriptor {
    NSString * _userActivityType;
}

@property (nonatomic, readonly, copy) NSString *userActivityType;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appDescriptor;
- (id)description;
- (id)descriptorWithAppDescriptor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserActivityType:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithUserActivityType:(id)arg1 localizedName:(id)arg2 bundleIdentifier:(id)arg3 extensionBundleIdentifier:(id)arg4 counterpartIdentifiers:(id)arg5 teamIdentifier:(id)arg6 supportedIntents:(id)arg7 bundleURL:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)userActivityType;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (unsigned long long)hashForSmartPromptPurposes;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isEqualForSmartPromptPurposes:(id)arg1;
- (id)serializedRepresentation;

@end
