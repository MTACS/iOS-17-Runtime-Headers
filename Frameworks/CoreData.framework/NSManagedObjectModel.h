
@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration, NSSecureCoding> {
    id * _additionalPrivateIvars;
    NSMutableDictionary * _configurations;
    _PFVMData * _dataForOptimization;
    NSMutableDictionary * _entities;
    NSMutableDictionary * _fetchRequestTemplates;
    struct __managedObjectModelFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _isImmutable : 1; 
        unsigned int _isOptimizedForEncoding : 1; 
        unsigned int _hasEntityWithConstraints : 1; 
        unsigned int _skipUserInfoTombstones : 1; 
        unsigned int _reservedEntityDescription : 27; 
    }  _managedObjectModelFlags;
    id * _optimizationHints;
    NSSet * _versionIdentifiers;
}

@property (setter=_setModelsReferenceIDOffset:, nonatomic) long long _modelsReferenceIDOffset;
@property (readonly) NSArray *configurations;
@property (retain) NSArray *entities;
@property (readonly, copy) NSDictionary *entitiesByName;
@property (readonly, copy) NSDictionary *entityVersionHashesByName;
@property (readonly, copy) NSDictionary *fetchRequestTemplatesByName;
@property (readonly) bool hmd_isImmutable;
@property (nonatomic, readonly) NSString *ic_versionHash;
@property (retain) NSDictionary *localizationDictionary;
@property (readonly, copy) NSString *versionChecksum;
@property (copy) NSSet *versionIdentifiers;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (long long)_debugOptimizedModelLayout;
+ (id)checksumsForVersionedModelAtURL:(id)arg1 error:(id*)arg2;
+ (id)mergedModelFromBundles:(id)arg1;
+ (id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)modelByMergingModels:(id)arg1;
+ (id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2;
+ (bool)supportsSecureCoding;
+ (bool)versionHashes:(id)arg1 compatibleWithStoreMetadata:(id)arg2;
+ (id)versionsHashesForModelAtURL:(id)arg1 error:(id*)arg2;

- (void)_addEntity:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (void)_flattenProperties;
- (id)_initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2;
- (id)_initWithEntities:(id)arg1;
- (id)_localizationPolicy;
- (id)_modelForVersionHashes:(id)arg1;
- (long long)_modelsReferenceIDOffset;
- (id)_optimizedEncoding:(id*)arg1;
- (void)_restoreValidation;
- (void)_setIsEditable:(bool)arg1;
- (void)_setIsEditable:(bool)arg1 optimizationStyle:(unsigned long long)arg2;
- (void)_setLocalizationPolicy:(id)arg1;
- (void)_setModelsReferenceIDOffset:(long long)arg1;
- (void)_stripForMigration;
- (void)_throwIfNotEditable;
- (id)configurations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (id)entitiesByName;
- (id)entitiesForConfiguration:(id)arg1;
- (id)entityVersionHashesByName;
- (id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2;
- (id)fetchRequestTemplateForName:(id)arg1;
- (id)fetchRequestTemplatesByName;
- (unsigned long long)hash;
- (id)immutableCopy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfOptimizedURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2;
- (bool)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (id)localizationDictionary;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setEntities:(id)arg1;
- (void)setEntities:(id)arg1 forConfiguration:(id)arg2;
- (void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2;
- (void)setLocalizationDictionary:(id)arg1;
- (void)setVersionIdentifiers:(id)arg1;
- (id)versionChecksum;
- (id)versionHash;
- (id)versionIdentifiers;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (id)vs_developerModeModelForVersion:(long long)arg1;
+ (id)vs_identityProviderEntityForVersion:(long long)arg1;
+ (id)vs_subscriptionModelForVersion:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (bool)hmd_isImmutable;
- (void)hmd_makeImmutable;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (id)ic_versionHash;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)modelCandidatesForCloudRecordings;
+ (id)modelCompatibleWithStoreMetadata:(id)arg1 forStoreURL:(id)arg2;
+ (id)mutableModelForModelFileName:(id)arg1;
+ (id)rc_currentObjectModel;
+ (id)rc_newObjectModel;
+ (id)rc_v10ObjectModel;
+ (id)rc_v11ObjectModel;
+ (id)rc_v6ObjectModel;
+ (id)rc_v7ObjectModel;
+ (id)rc_v7bObjectModel;
+ (id)rc_v8ObjectModel;
+ (id)rc_v9ObjectModel;
+ (void)updateAllowsCloudEncryptionAttributes:(id)arg1;
+ (void)updateAudioFutureAttribute:(id)arg1;

@end
