
@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration, NSSecureCoding> {
    int  _cd_rc;
    NSString * _classNameForEntity;
    struct __entityDescriptionFlags { 
        unsigned int _isAbstract : 1; 
        unsigned int _shouldValidateOnSave : 1; 
        unsigned int _isImmutable : 1; 
        unsigned int _isFlattened : 1; 
        unsigned int _skipValidation : 1; 
        unsigned int _hasPropertiesIndexedBySpotlight : 1; 
        unsigned int _hasPropertiesStoredInTruthFile : 1; 
        unsigned int _rangesAreInDataBlob : 1; 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _hasNonstandardPrimitiveProperties : 2; 
        unsigned int _hasUniqueProperties : 1; 
        unsigned int _hasChildrenWithUniqueProperties : 1; 
        unsigned int _validationUniqueProperties : 1; 
        unsigned int _isPersistentHistoryEntity : 1; 
        unsigned int _hasAttributesWithFileBackedFutures : 1; 
        unsigned int _reservedEntityDescription : 16; 
    }  _entityDescriptionFlags;
    struct _ExtraEntityIVars { id x1; id x2; id x3; id x4; id x5; id x6; struct os_unfair_lock_s { unsigned int x_7_1_1; } x7; int x8; void *x9; } * _extraIvars;
    id  _flattenedSubentities;
    Class  _instanceClass;
    id ** _kvcPropertyAccessors;
    NSManagedObjectModel * _model;
    long long  _modelsReferenceIDForEntity;
    NSString * _name;
    NSMutableDictionary * _properties;
    id  _propertyMapping;
    struct _NSRange { unsigned long long x1; unsigned long long x2; } * _propertyRanges;
    NSEntityDescription * _rootentity;
    id  _snapshotClass;
    NSMutableDictionary * _subentities;
    NSEntityDescription * _superentity;
    NSMutableDictionary * _userInfo;
    NSData * _versionHash;
    NSString * _versionHashModifier;
}

@property (getter=isAbstract) bool abstract;
@property (readonly, copy) NSDictionary *attributesByName;
@property (retain) NSArray *compoundIndexes;
@property (nonatomic, retain) NSExpression *coreSpotlightDisplayNameExpression;
@property (readonly) NSDictionary *hmd_attributesBySettingsPath;
@property (copy) NSArray *indexes;
@property (copy) NSString *managedObjectClassName;
@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (copy) NSString *name;
@property (readonly) NSEntityDescription *ph_baseEntity;
@property (retain) NSArray *properties;
@property (readonly, copy) NSDictionary *propertiesByName;
@property (getter=vs_referenceValueAttribute, setter=vs_setReferenceValueAttribute:, nonatomic, retain) NSAttributeDescription *referenceValueAttribute;
@property (readonly, copy) NSDictionary *relationshipsByName;
@property (copy) NSString *renamingIdentifier;
@property (retain) NSArray *subentities;
@property (readonly, copy) NSDictionary *subentitiesByName;
@property (readonly) NSEntityDescription *superentity;
@property (retain) NSArray *uniquenessConstraints;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *versionHashModifier;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (id)_MOClassName;
+ (id)entityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)initialize;
+ (id)insertNewObjectForEntityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)_addFactoryToRetainList:(id)arg1;
- (void)_addProperty:(id)arg1;
- (void)_addSubentity:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (void)_flattenProperties;
- (id)_initWithName:(id)arg1;
- (bool)_isDeallocating;
- (bool)_isEditable;
- (bool)_isSchemaEqual:(id)arg1;
- (void*)_leopardStyleAttributesByName;
- (void*)_leopardStyleRelationshipsByName;
- (id)_localRelationshipNamed:(id)arg1;
- (id)_newMappingForPropertiesOfRange:(unsigned int)arg1;
- (void*)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned long long)arg1;
- (unsigned long long)_offsetRelationshipIndex:(unsigned long long)arg1 fromSuperEntity:(id)arg2 andIsToMany:(bool)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; }*)_propertyRangesByType;
- (id)_propertySearchMapping;
- (id)_propertyWithRenamingIdentifier:(id)arg1;
- (void)_restoreValidation;
- (void)_setIsEditable:(bool)arg1;
- (bool)_skipValidation;
- (void)_stripForMigration;
- (bool)_subentitiesIncludes:(id)arg1;
- (void)_throwIfNotEditable;
- (bool)_tryRetain;
- (id)_uniquenessConstraintsAsFetchIndexes;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (id)attributeKeys;
- (id)attributesByName;
- (id)compoundIndexes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightDisplayNameExpression;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)elementID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)indexes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inverseForRelationshipKey:(id)arg1;
- (bool)isAbstract;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfEntity:(id)arg1;
- (id)keypathsToPrefetchForDeletePropagation;
- (id)managedObjectClassName;
- (id)managedObjectModel;
- (id)name;
- (id)properties;
- (id)propertiesByName;
- (id)relationshipsByName;
- (id)relationshipsWithDestinationEntity:(id)arg1;
- (oneway void)release;
- (id)renamingIdentifier;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setAbstract:(bool)arg1;
- (void)setCompoundIndexes:(id)arg1;
- (void)setCoreSpotlightDisplayNameExpression:(id)arg1;
- (void)setElementID:(id)arg1;
- (void)setIndexes:(id)arg1;
- (void)setManagedObjectClassName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRenamingIdentifier:(id)arg1;
- (void)setSubentities:(id)arg1;
- (void)setUniquenessConstraints:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVersionHashModifier:(id)arg1;
- (id)subentities;
- (id)subentitiesByName;
- (id)superentity;
- (id)toManyRelationshipKeys;
- (id)toOneRelationshipKeys;
- (id)uniquenessConstraints;
- (id)userInfo;
- (id)versionHash;
- (id)versionHashModifier;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (id)ph_baseEntity;
- (void)ph_enumerateSelfAndSubentities:(id /* block */)arg1;
- (id)ph_relationshipDescriptionsForKeyPath:(id)arg1;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (id)vs_subscriptionEntityForVersion:(long long)arg1;

- (id)vs_referenceValueAttribute;
- (void)vs_setReferenceValueAttribute:(id)arg1;
- (void)vs_setUserInfoValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)hmd_attributeForSettingsPath:(id)arg1;
- (id)hmd_attributesBySettingsPath;
- (void)hmd_recursivelyEnumerateSubentitiesUsingBlock:(id /* block */)arg1;

@end
