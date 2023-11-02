
@interface LNQueryMetadata : NSObject <LNEffectiveBundleIdentifierGrouping, NSCopying, NSSecureCoding> {
    NSDictionary * _availabilityAnnotations;
    unsigned long long  _capabilities;
    LNActionDescriptionMetadata * _descriptionMetadata;
    NSOrderedSet * _effectiveBundleIdentifiers;
    NSString * _entityType;
    NSString * _identifier;
    NSString * _mangledTypeName;
    NSDictionary * _mangledTypeNameByBundleIdentifier;
    NSArray * _parameters;
    NSArray * _sortingOptions;
}

@property (nonatomic, readonly, copy) NSDictionary *availabilityAnnotations;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) LNActionDescriptionMetadata *descriptionMetadata;
@property (nonatomic, readonly, copy) NSOrderedSet *effectiveBundleIdentifiers;
@property (nonatomic, readonly, copy) NSString *entityType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *mangledTypeName;
@property (nonatomic, readonly, copy) NSDictionary *mangledTypeNameByBundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *parameters;
@property (nonatomic, readonly, copy) NSString *queryType;
@property (nonatomic, readonly, copy) NSArray *sortingOptions;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availabilityAnnotations;
- (unsigned long long)capabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionMetadata;
- (id)effectiveBundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)entityType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 entityType:(id)arg2 mangledTypeName:(id)arg3 mangledTypeNameByBundleIdentifier:(id)arg4 effectiveBundleIdentifiers:(id)arg5 parameters:(id)arg6 sortingOptions:(id)arg7;
- (id)initWithIdentifier:(id)arg1 entityType:(id)arg2 mangledTypeName:(id)arg3 mangledTypeNameByBundleIdentifier:(id)arg4 effectiveBundleIdentifiers:(id)arg5 parameters:(id)arg6 sortingOptions:(id)arg7 availabilityAnnotations:(id)arg8;
- (id)initWithIdentifier:(id)arg1 entityType:(id)arg2 mangledTypeName:(id)arg3 mangledTypeNameByBundleIdentifier:(id)arg4 effectiveBundleIdentifiers:(id)arg5 parameters:(id)arg6 sortingOptions:(id)arg7 availabilityAnnotations:(id)arg8 capabilities:(unsigned long long)arg9;
- (id)initWithIdentifier:(id)arg1 entityType:(id)arg2 mangledTypeName:(id)arg3 mangledTypeNameByBundleIdentifier:(id)arg4 effectiveBundleIdentifiers:(id)arg5 parameters:(id)arg6 sortingOptions:(id)arg7 availabilityAnnotations:(id)arg8 capabilities:(unsigned long long)arg9 descriptionMetadata:(id)arg10;
- (id)initWithIdentifier:(id)arg1 queryType:(id)arg2 entityType:(id)arg3 mangledTypeName:(id)arg4 mangledTypeNameByBundleIdentifier:(id)arg5 effectiveBundleIdentifiers:(id)arg6 parameters:(id)arg7 sortingOptions:(id)arg8;
- (id)initWithIdentifier:(id)arg1 queryType:(id)arg2 entityType:(id)arg3 parameters:(id)arg4 sortingOptions:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mangledTypeName;
- (id)mangledTypeNameByBundleIdentifier;
- (id)mangledTypeNameForBundleIdentifier:(id)arg1;
- (id)metadataByAddingEffectiveBundleIdentifiers:(id)arg1 mangledTypeName:(id)arg2;
- (id)parameters;
- (id)queryType;
- (id)sortingOptions;

@end
