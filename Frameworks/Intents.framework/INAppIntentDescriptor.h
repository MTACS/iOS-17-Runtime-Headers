
@interface INAppIntentDescriptor : INAppDescriptor <NSSecureCoding> {
    NSString * _intentIdentifier;
    NSSet * _supportedEntities;
}

@property (nonatomic, readonly, copy) NSString *intentIdentifier;
@property (nonatomic, readonly) NSSet *supportedEntities;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntentIdentifier:(id)arg1 applicationRecord:(id)arg2;
- (id)initWithIntentIdentifier:(id)arg1 applicationRecord:(id)arg2 supportedAppIntents:(id)arg3 supportedEntities:(id)arg4;
- (id)initWithIntentIdentifier:(id)arg1 localizedName:(id)arg2 bundleIdentifier:(id)arg3 extensionBundleIdentifier:(id)arg4 counterpartIdentifiers:(id)arg5 teamIdentifier:(id)arg6 supportedIntents:(id)arg7 supportedEntities:(id)arg8 bundleURL:(id)arg9 documentTypes:(id)arg10;
- (id)intentIdentifier;
- (bool)isEqual:(id)arg1;
- (id)supportedEntities;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (unsigned long long)hashForSmartPromptPurposes;
- (id)initWithFullyQualifiedActionIdentifier:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isEqualForSmartPromptPurposes:(id)arg1;
- (id)serializedRepresentation;

@end
