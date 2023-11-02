
@interface LNActionMetadata : NSObject <LNEffectiveBundleIdentifierGrouping, NSCopying, NSSecureCoding> {
    LNActionConfiguration * _actionConfiguration;
    NSString * _attributionBundleIdentifier;
    long long  _authenticationPolicy;
    NSDictionary * _availabilityAnnotations;
    long long  _bundleMetadataVersion;
    NSString * _customIntentClassName;
    LNActionDeprecationMetadata * _deprecationMetadata;
    LNActionDescriptionMetadata * _descriptionMetadata;
    bool  _discoverable;
    NSOrderedSet * _effectiveBundleIdentifiers;
    NSString * _identifier;
    NSString * _mangledTypeName;
    NSDictionary * _mangledTypeNameByBundleIdentifier;
    NSString * _nullableEffectiveBundleIdentifier;
    bool  _openAppWhenRun;
    unsigned long long  _outputFlags;
    LNValueType * _outputType;
    NSArray * _parameters;
    NSArray * _requiredCapabilities;
    NSDictionary * _shortcutsMetadata;
    NSDictionary * _systemProtocolMetadata;
    NSArray * _systemProtocols;
    LNStaticDeferredLocalizedString * _title;
    NSDictionary * _typeSpecificMetadata;
}

@property (nonatomic, readonly) LNActionConfiguration *actionConfiguration;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *actionDescription;
@property (nonatomic, readonly, copy) NSString *attributionBundleIdentifier;
@property (nonatomic, readonly) long long authenticationPolicy;
@property (nonatomic, readonly, copy) NSDictionary *availabilityAnnotations;
@property (nonatomic, readonly) long long bundleMetadataVersion;
@property (nonatomic, readonly, copy) NSString *customIntentClassName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) LNActionDeprecationMetadata *deprecationMetadata;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) LNActionDescriptionMetadata *descriptionMetadata;
@property (getter=isDiscoverable, nonatomic, readonly) bool discoverable;
@property (nonatomic, readonly, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly, copy) NSOrderedSet *effectiveBundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *iconSystemImageName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *mangledTypeName;
@property (nonatomic, readonly, copy) NSDictionary *mangledTypeNameByBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *nullableEffectiveBundleIdentifier;
@property (nonatomic, readonly) bool openAppWhenRun;
@property (nonatomic, readonly) unsigned long long outputFlags;
@property (nonatomic, readonly, copy) LNValueType *outputType;
@property (nonatomic, readonly, copy) NSArray *parameters;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly, copy) NSArray *requiredCapabilities;
@property (nonatomic, readonly) bool requiresMDMChecks;
@property (getter=isSessionStartingAction, nonatomic, readonly) bool sessionStartingAction;
@property (nonatomic, readonly) WFAppIntentShortcutsMetadata *shortcutsActionMetadata;
@property (nonatomic, readonly, copy) NSDictionary *shortcutsMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *systemProtocolMetadata;
@property (nonatomic, readonly) NSArray *systemProtocols;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *title;
@property (nonatomic, readonly, copy) NSDictionary *typeSpecificMetadata;
@property (nonatomic, readonly) NSArray *wf_parameterDefinitions;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionConfiguration;
- (id)actionDescription;
- (id)actionMetadataWithAttributionBundleIdentifier:(id)arg1;
- (id)actionMetadataWithParameters:(id)arg1;
- (id)attributionBundleIdentifier;
- (long long)authenticationPolicy;
- (id)availabilityAnnotations;
- (long long)bundleMetadataVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIntentClassName;
- (id)deprecationMetadata;
- (id)description;
- (id)descriptionMetadata;
- (id)effectiveBundleIdentifier;
- (id)effectiveBundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iconSystemImageName;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder_Sydro:(id)arg1;
- (id)initWithIdentifier:(id)arg1 effectiveBundleIdentifier:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(long long)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 actionConfiguration:(id)arg9 typeSpecificMetadata:(id)arg10;
- (id)initWithIdentifier:(id)arg1 effectiveBundleIdentifier:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(long long)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 actionConfiguration:(id)arg9 typeSpecificMetadata:(id)arg10 iconSystemImageName:(id)arg11 shortcutsMetadata:(id)arg12;
- (id)initWithIdentifier:(id)arg1 effectiveBundleIdentifier:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(long long)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 actionConfiguration:(id)arg9 typeSpecificMetadata:(id)arg10 shortcutsMetadata:(id)arg11;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifier:(id)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(long long)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifier:(id)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(long long)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 customIntentClassName:(id)arg12;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifier:(id)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(long long)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 iconSystemImageName:(id)arg12 shortcutsMetadata:(id)arg13;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifier:(id)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(long long)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 iconSystemImageName:(id)arg12 shortcutsMetadata:(id)arg13 customIntentClassName:(id)arg14;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifier:(id)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(long long)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 sessionStartingAction:(bool)arg10 actionConfiguration:(id)arg11 typeSpecificMetadata:(id)arg12 customIntentClassName:(id)arg13;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifier:(id)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(long long)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 sessionStartingAction:(bool)arg10 actionConfiguration:(id)arg11 typeSpecificMetadata:(id)arg12 iconSystemImageName:(id)arg13 shortcutsMetadata:(id)arg14 customIntentClassName:(id)arg15;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifiers:(id)arg3 bundleMetadataVersion:(long long)arg4 title:(id)arg5 description:(id)arg6 presentationStyle:(long long)arg7 outputType:(id)arg8 parameters:(id)arg9 systemProtocols:(id)arg10 actionConfiguration:(id)arg11 typeSpecificMetadata:(id)arg12 iconSystemImageName:(id)arg13 shortcutsMetadata:(id)arg14 customIntentClassName:(id)arg15;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifiers:(id)arg3 bundleMetadataVersion:(long long)arg4 title:(id)arg5 description:(id)arg6 presentationStyle:(long long)arg7 outputType:(id)arg8 parameters:(id)arg9 systemProtocols:(id)arg10 sessionStartingAction:(bool)arg11 actionConfiguration:(id)arg12 typeSpecificMetadata:(id)arg13 iconSystemImageName:(id)arg14 shortcutsMetadata:(id)arg15 customIntentClassName:(id)arg16;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifiers:(id)arg3 bundleMetadataVersion:(long long)arg4 title:(id)arg5 description:(id)arg6 presentationStyle:(long long)arg7 outputType:(id)arg8 parameters:(id)arg9 systemProtocols:(id)arg10 sessionStartingAction:(bool)arg11 actionConfiguration:(id)arg12 typeSpecificMetadata:(id)arg13 iconSystemImageName:(id)arg14 shortcutsMetadata:(id)arg15 customIntentClassName:(id)arg16 requiresMDMChecks:(bool)arg17;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifiers:(id)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(long long)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 customIntentClassName:(id)arg12;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifiers:(id)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(long long)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 sessionStartingAction:(bool)arg10 actionConfiguration:(id)arg11 typeSpecificMetadata:(id)arg12 customIntentClassName:(id)arg13;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 effectiveBundleIdentifiers:(id)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(long long)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 sessionStartingAction:(bool)arg10 actionConfiguration:(id)arg11 typeSpecificMetadata:(id)arg12 iconSystemImageName:(id)arg13 shortcutsMetadata:(id)arg14 customIntentClassName:(id)arg15;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 bundleMetadataVersion:(long long)arg5 title:(id)arg6 description:(id)arg7 presentationStyle:(long long)arg8 outputType:(id)arg9 parameters:(id)arg10 systemProtocols:(id)arg11 actionConfiguration:(id)arg12 typeSpecificMetadata:(id)arg13 iconSystemImageName:(id)arg14 shortcutsMetadata:(id)arg15 customIntentClassName:(id)arg16;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 bundleMetadataVersion:(long long)arg5 title:(id)arg6 descriptionMetadata:(id)arg7 deprecationMetadata:(id)arg8 openAppWhenRun:(bool)arg9 authenticationPolicy:(long long)arg10 outputType:(id)arg11 outputFlags:(unsigned long long)arg12 parameters:(id)arg13 systemProtocolMetadata:(id)arg14 actionConfiguration:(id)arg15 typeSpecificMetadata:(id)arg16 customIntentClassName:(id)arg17 availabilityAnnotations:(id)arg18 shortcutsMetadata:(id)arg19;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 bundleMetadataVersion:(long long)arg5 title:(id)arg6 descriptionMetadata:(id)arg7 deprecationMetadata:(id)arg8 openAppWhenRun:(bool)arg9 authenticationPolicy:(long long)arg10 outputType:(id)arg11 outputFlags:(unsigned long long)arg12 parameters:(id)arg13 systemProtocolMetadata:(id)arg14 actionConfiguration:(id)arg15 typeSpecificMetadata:(id)arg16 customIntentClassName:(id)arg17 availabilityAnnotations:(id)arg18 shortcutsMetadata:(id)arg19 requiredCapabilities:(id)arg20;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 bundleMetadataVersion:(long long)arg5 title:(id)arg6 descriptionMetadata:(id)arg7 deprecationMetadata:(id)arg8 openAppWhenRun:(bool)arg9 discoverable:(bool)arg10 authenticationPolicy:(long long)arg11 outputType:(id)arg12 outputFlags:(unsigned long long)arg13 parameters:(id)arg14 systemProtocolMetadata:(id)arg15 actionConfiguration:(id)arg16 typeSpecificMetadata:(id)arg17 customIntentClassName:(id)arg18 availabilityAnnotations:(id)arg19 shortcutsMetadata:(id)arg20 requiredCapabilities:(id)arg21;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 bundleMetadataVersion:(long long)arg5 title:(id)arg6 descriptionMetadata:(id)arg7 deprecationMetadata:(id)arg8 openAppWhenRun:(bool)arg9 discoverable:(bool)arg10 authenticationPolicy:(long long)arg11 outputType:(id)arg12 outputFlags:(unsigned long long)arg13 parameters:(id)arg14 systemProtocolMetadata:(id)arg15 actionConfiguration:(id)arg16 typeSpecificMetadata:(id)arg17 customIntentClassName:(id)arg18 availabilityAnnotations:(id)arg19 shortcutsMetadata:(id)arg20 requiredCapabilities:(id)arg21 attributionBundleIdentifier:(id)arg22;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 bundleMetadataVersion:(long long)arg5 title:(id)arg6 descriptionMetadata:(id)arg7 openAppWhenRun:(bool)arg8 authenticationPolicy:(long long)arg9 outputType:(id)arg10 outputFlags:(unsigned long long)arg11 parameters:(id)arg12 systemProtocolMetadata:(id)arg13 actionConfiguration:(id)arg14 typeSpecificMetadata:(id)arg15 customIntentClassName:(id)arg16 availabilityAnnotations:(id)arg17 shortcutsMetadata:(id)arg18;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 bundleMetadataVersion:(long long)arg5 title:(id)arg6 descriptionMetadata:(id)arg7 openAppWhenRun:(bool)arg8 authenticationPolicy:(long long)arg9 outputType:(id)arg10 outputFlags:(unsigned long long)arg11 parameters:(id)arg12 systemProtocols:(id)arg13 actionConfiguration:(id)arg14 typeSpecificMetadata:(id)arg15 customIntentClassName:(id)arg16 availabilityAnnotations:(id)arg17 shortcutsMetadata:(id)arg18;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 bundleMetadataVersion:(long long)arg5 title:(id)arg6 descriptionMetadata:(id)arg7 openAppWhenRun:(bool)arg8 authenticationPolicy:(long long)arg9 outputType:(id)arg10 outputFlags:(unsigned long long)arg11 parameters:(id)arg12 systemProtocols:(id)arg13 actionConfiguration:(id)arg14 typeSpecificMetadata:(id)arg15 customIntentClassName:(id)arg16 shortcutsMetadata:(id)arg17;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 bundleMetadataVersion:(long long)arg5 title:(id)arg6 descriptionMetadata:(id)arg7 presentationStyle:(long long)arg8 authenticationPolicy:(long long)arg9 outputType:(id)arg10 outputFlags:(unsigned long long)arg11 parameters:(id)arg12 systemProtocols:(id)arg13 actionConfiguration:(id)arg14 typeSpecificMetadata:(id)arg15 iconSystemImageName:(id)arg16 customIntentClassName:(id)arg17 shortcutsMetadata:(id)arg18;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 bundleMetadataVersion:(long long)arg5 title:(id)arg6 descriptionMetadata:(id)arg7 presentationStyle:(long long)arg8 authenticationPolicy:(long long)arg9 outputType:(id)arg10 parameters:(id)arg11 systemProtocols:(id)arg12 actionConfiguration:(id)arg13 typeSpecificMetadata:(id)arg14 iconSystemImageName:(id)arg15 customIntentClassName:(id)arg16 shortcutsMetadata:(id)arg17;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(long long)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 actionConfiguration:(id)arg9 typeSpecificMetadata:(id)arg10 customIntentClassName:(id)arg11;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 title:(id)arg3 descriptionMetadata:(id)arg4 openAppWhenRun:(bool)arg5 authenticationPolicy:(long long)arg6 outputType:(id)arg7 outputFlags:(unsigned long long)arg8 parameters:(id)arg9 systemProtocols:(id)arg10 actionConfiguration:(id)arg11 typeSpecificMetadata:(id)arg12 customIntentClassName:(id)arg13;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 title:(id)arg3 descriptionMetadata:(id)arg4 presentationStyle:(long long)arg5 authenticationPolicy:(long long)arg6 outputType:(id)arg7 outputFlags:(unsigned long long)arg8 parameters:(id)arg9 systemProtocols:(id)arg10 actionConfiguration:(id)arg11 typeSpecificMetadata:(id)arg12 customIntentClassName:(id)arg13;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 title:(id)arg3 descriptionMetadata:(id)arg4 presentationStyle:(long long)arg5 authenticationPolicy:(long long)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 customIntentClassName:(id)arg12;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 presentationStyle:(long long)arg4 outputType:(id)arg5 parameters:(id)arg6 systemProtocols:(id)arg7 actionConfiguration:(id)arg8;
- (bool)isDiscoverable;
- (bool)isEqual:(id)arg1;
- (bool)isSessionStartingAction;
- (id)mangledTypeName;
- (id)mangledTypeNameByBundleIdentifier;
- (id)mangledTypeNameForBundleIdentifier:(id)arg1;
- (id)metadataByAddingEffectiveBundleIdentifiers:(id)arg1 mangledTypeName:(id)arg2;
- (id)nullableEffectiveBundleIdentifier;
- (bool)openAppWhenRun;
- (unsigned long long)outputFlags;
- (id)outputType;
- (id)parameters;
- (long long)presentationStyle;
- (id)requiredCapabilities;
- (bool)requiresMDMChecks;
- (id)shortcutsMetadata;
- (id)systemProtocolMetadata;
- (id)systemProtocols;
- (id)title;
- (id)typeSpecificMetadata;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (bool)wf_shouldPrewarmAppLaunchWithAction:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)shortcutsActionMetadata;
- (id)wf_parameterDefinitions;
- (bool)wf_validateParametersForAction:(id)arg1 error:(id*)arg2;

@end
