
@interface LNEnumMetadata : NSObject <LNEffectiveBundleIdentifierGrouping, NSCopying, NSSecureCoding> {
    NSDictionary * _availabilityAnnotations;
    NSArray * _cases;
    NSString * _customIntentEnumTypeName;
    LNTypeDisplayRepresentation * _displayRepresentation;
    NSOrderedSet * _effectiveBundleIdentifiers;
    NSString * _identifier;
    NSString * _mangledTypeName;
    NSDictionary * _mangledTypeNameByBundleIdentifier;
    NSNumber * _system;
}

@property (nonatomic, readonly, copy) NSDictionary *availabilityAnnotations;
@property (nonatomic, readonly, copy) NSArray *cases;
@property (nonatomic, readonly, copy) NSString *customIntentEnumTypeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) LNTypeDisplayRepresentation *displayRepresentation;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *displayTypeName;
@property (nonatomic, readonly, copy) NSOrderedSet *effectiveBundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *mangledTypeName;
@property (nonatomic, readonly, copy) NSDictionary *mangledTypeNameByBundleIdentifier;
@property (readonly) Class superclass;
@property (getter=isSystem, nonatomic, readonly) NSNumber *system;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)ln_enumIdentifierIsSystem:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availabilityAnnotations;
- (id)cases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIntentEnumTypeName;
- (id)description;
- (id)displayRepresentation;
- (id)displayTypeName;
- (id)effectiveBundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cases:(id)arg2;
- (id)initWithIdentifier:(id)arg1 displayTypeName:(id)arg2 cases:(id)arg3;
- (id)initWithIdentifier:(id)arg1 displayTypeName:(id)arg2 cases:(id)arg3 customIntentEnumTypeName:(id)arg4;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 displayRepresentation:(id)arg5 cases:(id)arg6 customIntentEnumTypeName:(id)arg7;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 displayRepresentation:(id)arg5 cases:(id)arg6 customIntentEnumTypeName:(id)arg7 availabilityAnnotations:(id)arg8;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 displayRepresentation:(id)arg5 cases:(id)arg6 customIntentEnumTypeName:(id)arg7 availabilityAnnotations:(id)arg8 system:(id)arg9;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 displayTypeName:(id)arg5 cases:(id)arg6 customIntentEnumTypeName:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)isSystem;
- (id)mangledTypeName;
- (id)mangledTypeNameByBundleIdentifier;
- (id)mangledTypeNameForBundleIdentifier:(id)arg1;
- (id)metadataByAddingEffectiveBundleIdentifiers:(id)arg1 mangledTypeName:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClassWithAppBundleIdentifier:(id)arg1;
- (Class)wf_contentItemClassWithAppBundleIdentifier:(id)arg1 superclass:(Class)arg2;

@end
