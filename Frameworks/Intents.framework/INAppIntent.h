
@interface INAppIntent : INIntent {
    NSString * _appIntentIdentifier;
    NSString * _extensionBundleId;
    long long  _indexingHash;
    NSString * _launchId;
    LNAction * _linkAction;
    NSDictionary * _serializedParameters;
    <INVCVoiceShortcutClient> * _voiceShortcutClient;
}

@property (nonatomic, readonly, copy) NSString *appIntentIdentifier;
@property (nonatomic, readonly) NSDictionary *atx_comparableParameters;
@property (nonatomic, readonly) LNAction *linkAction;
@property (nonatomic, readonly) NSDictionary *serializedParameters;
@property (nonatomic, retain) <INVCVoiceShortcutClient> *voiceShortcutClient;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_JSONDictionaryRepresentation;
- (id)_asMigratedAppIntent;
- (id)_className;
- (id)_dictionaryRepresentation;
- (long long)_indexingHash;
- (void)_setExtensionBundleId:(id)arg1;
- (void)_setLaunchId:(id)arg1;
- (id)appIntentIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleId;
- (unsigned long long)hash;
- (id)initWithAppBundleIdentifier:(id)arg1 appIntentIdentifier:(id)arg2 serializedParameters:(id)arg3;
- (id)initWithAppBundleIdentifier:(id)arg1 extensionBundleIdentifier:(id)arg2 appIntentIdentifier:(id)arg3 serializedParameters:(id)arg4;
- (id)initWithAppBundleIdentifier:(id)arg1 linkAction:(id)arg2 linkActionMetadata:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)launchId;
- (id)linkAction;
- (id)serializedParameters;
- (void)setVoiceShortcutClient:(id)arg1;
- (id)voiceShortcutClient;
- (id)widgetPlistableRepresentation:(id*)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/ContextualSuggestionClient.framework/ContextualSuggestionClient

- (id)atx_comparableParameters;
- (id)atx_intentType;

@end
