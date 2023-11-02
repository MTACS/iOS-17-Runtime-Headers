
@interface HMDManagedObjectCodingModel : NSObject {
    SEL  _attributeValueForKeySelector;
    NSString * _codingKeyConfigKey;
    NSString * _conditionalConfigKey;
    NSOrderedSet * _conditions;
    SEL  _contextualizeConditionsSelector;
    NSDictionary * _descriptions;
    bool  _hasAnyReferenceRelationships;
    NSString * _includeConfigKey;
    NSString * _inlineConfigKey;
    NSString * _keyAttributesConfigKey;
    NSManagedObjectModel * _model;
    unsigned long long  _options;
    NSString * _refContextConfigKey;
    HMDEntityCodingDescription * _root;
    NSString * _transformerConfigKey;
    NSString * _typeIDConfigKey;
}

@property (readonly) NSArray *allDescriptions;
@property (readonly) bool hasOnlyParentChildRelationships;
@property (readonly) NSManagedObjectModel *objectModel;
@property (readonly) HMDEntityCodingDescription *rootDescription;

+ (unsigned long long)defaultOptions;

- (void).cxx_destruct;
- (id)allDescriptions;
- (id)decodeRootObjectFromReader:(id)arg1;
- (id)descriptionForAttribute:(id)arg1;
- (id)descriptionForDestinationOfRelationship:(id)arg1;
- (id)descriptionForEntity:(id)arg1;
- (id)descriptionForManagedObject:(id)arg1;
- (id)descriptionForRelationship:(id)arg1;
- (bool)encodeRootObject:(id)arg1 withWriter:(id)arg2;
- (bool)encodeRootObject:(id)arg1 withWriter:(id)arg2 changes:(id)arg3 conditions:(id)arg4 userContext:(id)arg5;
- (bool)hasOnlyParentChildRelationships;
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntity:(id)arg3;
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntity:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntityName:(id)arg3;
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntityName:(id)arg3 options:(unsigned long long)arg4;
- (id)insertOrUpdateRootObjectInContext:(id)arg1 fromReader:(id)arg2;
- (bool)isRelevantChanges:(id)arg1 withRootObject:(id)arg2 conditions:(id)arg3 userContext:(id)arg4;
- (bool)isValidCondition:(id)arg1;
- (id)objectModel;
- (id)rootDescription;
- (id)subentityOfDescription:(id)arg1 withTypeID:(id)arg2;
- (bool)updateRootObject:(id)arg1 fromReader:(id)arg2;

@end
