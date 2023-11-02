
@interface INAppDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSSet * _counterpartIdentifiers;
    NSSet * _documentTypes;
    NSString * _extensionBundleIdentifier;
    NSString * _localizedName;
    bool  _requiresUserConfirmation;
    NSSet * _supportedIntents;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly) LSApplicationRecord *applicationRecord;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSSet *counterpartIdentifiers;
@property (nonatomic, readonly) NSSet *documentTypes;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic) bool requiresUserConfirmation;
@property (getter=isShortcutsApp, nonatomic, readonly) bool shortcutsApp;
@property (nonatomic, readonly) NSSet *supportedIntents;
@property (nonatomic, readonly) NSString *teamIdentifier;
@property (getter=isThirdParty, nonatomic, readonly) bool thirdParty;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationRecord;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)counterpartIdentifiers;
- (id)description;
- (id)descriptorWithExtensionBundleIdentifier:(id)arg1;
- (id)descriptorWithRecord:(id)arg1;
- (id)documentTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (unsigned long long)hash;
- (id)initWithApplicationRecord:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedName:(id)arg1 bundleIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 counterpartIdentifiers:(id)arg4 teamIdentifier:(id)arg5 supportedIntents:(id)arg6 bundleURL:(id)arg7 documentTypes:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (id)localizedName;
- (bool)requiresUserConfirmation;
- (void)setRequiresUserConfirmation:(bool)arg1;
- (id)supportedIntents;
- (id)teamIdentifier;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (id)_descriptorWithExtensionBundleIdentifier:(id)arg1;
- (unsigned long long)hashForSmartPromptPurposes;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isEqualForSmartPromptPurposes:(id)arg1;
- (bool)isShortcutsApp;
- (bool)isThirdParty;
- (id)selfIfNotShortcutsApp;
- (id)serializedRepresentation;

@end
