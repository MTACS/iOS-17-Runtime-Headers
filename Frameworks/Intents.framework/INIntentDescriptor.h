
@interface INIntentDescriptor : INAppDescriptor <NSSecureCoding> {
    NSString * _displayableBundleIdentifier;
    NSArray * _extensions;
    NSString * _intentClassName;
    long long  _preferredCallProvider;
    NSString * _uiExtensionBundleIdentifier;
    NSArray * _uiExtensions;
}

@property (nonatomic, readonly) LSApplicationRecord *applicationRecord;
@property (nonatomic, readonly) bool canRunOnLocalDevice;
@property (nonatomic, readonly) LSApplicationRecord *displayableApplicationRecord;
@property (nonatomic, readonly, copy) NSString *displayableBundleIdentifier;
@property (nonatomic, readonly) bool hasCustomUIExtension;
@property (nonatomic, readonly, copy) NSString *intentClassName;
@property (nonatomic, readonly) LSApplicationRecord *launchableApplicationRecord;
@property (nonatomic, readonly) long long preferredCallProvider;
@property (nonatomic, readonly, copy) NSString *uiExtensionBundleIdentifier;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_extensionsWithError:(id*)arg1;
- (id)_matchingAttributesForExtensionPoint:(id)arg1 error:(id*)arg2;
- (id)_uiExtensionsWithError:(id*)arg1;
- (id)appDescriptor;
- (bool)canRunOnLocalDevice;
- (id)description;
- (id)descriptorWithAppDescriptor:(id)arg1;
- (id)descriptorWithPreferredCallProvider:(long long)arg1;
- (id)displayableAppDescriptor;
- (id)displayableApplicationRecord;
- (id)displayableBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCustomUIExtension;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntentClassName:(id)arg1 extensionBundleId:(id)arg2;
- (id)initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2;
- (id)initWithIntentClassName:(id)arg1 localizedName:(id)arg2 bundleIdentifier:(id)arg3 displayableBundleIdentifier:(id)arg4 extensionBundleIdentifier:(id)arg5 uiExtensionBundleIdentifier:(id)arg6 counterpartIdentifiers:(id)arg7 teamIdentifier:(id)arg8 preferredCallProvider:(long long)arg9 supportedIntents:(id)arg10 bundleURL:(id)arg11 documentTypes:(id)arg12;
- (id)initWithIntentTypeName:(id)arg1;
- (id)intentClassName;
- (bool)isEqual:(id)arg1;
- (id)launchableApplicationRecord;
- (id)mergeWithDescriptor:(id)arg1;
- (long long)preferredCallProvider;
- (id)uiExtensionBundleIdentifier;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (id)_displayableAppDescriptor;
- (unsigned long long)hashForSmartPromptPurposes;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isEqualForSmartPromptPurposes:(id)arg1;
- (id)serializedRepresentation;

@end
