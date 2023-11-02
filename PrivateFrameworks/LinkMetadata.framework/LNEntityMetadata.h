
@interface LNEntityMetadata : NSObject <LNEffectiveBundleIdentifierGrouping, NSCopying, NSSecureCoding> {
    NSDictionary * _availabilityAnnotations;
    NSString * _customIntentTypeClassName;
    LNTypeDisplayRepresentation * _displayRepresentation;
    NSOrderedSet * _effectiveBundleIdentifiers;
    NSString * _identifier;
    NSString * _mangledTypeName;
    NSDictionary * _mangledTypeNameByBundleIdentifier;
    NSArray * _properties;
    NSDictionary * _systemProtocolMetadata;
    bool  _transient;
}

@property (nonatomic, readonly, copy) NSDictionary *availabilityAnnotations;
@property (nonatomic, readonly, copy) NSString *customIntentTypeClassName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) LNTypeDisplayRepresentation *displayRepresentation;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *displayTypeName;
@property (nonatomic, readonly, copy) NSOrderedSet *effectiveBundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *mangledTypeName;
@property (nonatomic, readonly, copy) NSDictionary *mangledTypeNameByBundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *properties;
@property (nonatomic, readonly) WFAppIntentShortcutsMetadata *shortcutsActionMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *systemProtocolMetadata;
@property (getter=isTransient, nonatomic, readonly) bool transient;
@property (nonatomic, readonly, copy) NSString *typeName;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availabilityAnnotations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIntentTypeClassName;
- (id)description;
- (id)displayRepresentation;
- (id)displayTypeName;
- (id)effectiveBundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 transient:(bool)arg2 mangledTypeName:(id)arg3 mangledTypeNameByBundleIdentifier:(id)arg4 effectiveBundleIdentifiers:(id)arg5 displayRepresentation:(id)arg6 properties:(id)arg7 customIntentTypeClassName:(id)arg8;
- (id)initWithIdentifier:(id)arg1 transient:(bool)arg2 mangledTypeName:(id)arg3 mangledTypeNameByBundleIdentifier:(id)arg4 effectiveBundleIdentifiers:(id)arg5 displayRepresentation:(id)arg6 properties:(id)arg7 customIntentTypeClassName:(id)arg8 availabilityAnnotations:(id)arg9;
- (id)initWithIdentifier:(id)arg1 transient:(bool)arg2 mangledTypeName:(id)arg3 mangledTypeNameByBundleIdentifier:(id)arg4 effectiveBundleIdentifiers:(id)arg5 displayRepresentation:(id)arg6 properties:(id)arg7 customIntentTypeClassName:(id)arg8 availabilityAnnotations:(id)arg9 systemProtocolMetadata:(id)arg10;
- (id)initWithIdentifier:(id)arg1 transient:(bool)arg2 mangledTypeName:(id)arg3 mangledTypeNameByBundleIdentifier:(id)arg4 effectiveBundleIdentifiers:(id)arg5 displayTypeName:(id)arg6 properties:(id)arg7 customIntentTypeClassName:(id)arg8;
- (id)initWithTypeName:(id)arg1 displayTypeName:(id)arg2 properties:(id)arg3;
- (id)initWithTypeName:(id)arg1 displayTypeName:(id)arg2 properties:(id)arg3 customIntentTypeClassName:(id)arg4;
- (id)initWithTypeName:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 displayTypeName:(id)arg5 properties:(id)arg6 customIntentTypeClassName:(id)arg7;
- (id)initWithTypeName:(id)arg1 properties:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isTransient;
- (id)mangledTypeName;
- (id)mangledTypeNameByBundleIdentifier;
- (id)mangledTypeNameForBundleIdentifier:(id)arg1;
- (id)metadataByAddingEffectiveBundleIdentifiers:(id)arg1 mangledTypeName:(id)arg2;
- (id)properties;
- (id)systemProtocolMetadata;
- (id)typeName;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)wf_addDescriptionMethodsToClass:(Class)arg1 withEntityType:(id)arg2 appBundleIdentifier:(id)arg3;
+ (Class)wf_descriptionClassForEntityType:(id)arg1 appBundleIdentifier:(id)arg2;

- (id)shortcutsActionMetadata;
- (Class)wf_contentItemClassWithQueryMetadata:(id)arg1 appBundleIdentifier:(id)arg2 displayedAppBundleIdentifier:(id)arg3;
- (Class)wf_contentItemClassWithQueryMetadata:(id)arg1 appBundleIdentifier:(id)arg2 displayedAppBundleIdentifier:(id)arg3 superclass:(Class)arg4;

@end
