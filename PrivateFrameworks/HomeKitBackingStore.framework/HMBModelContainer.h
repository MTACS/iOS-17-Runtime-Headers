
@interface HMBModelContainer : HMFObject <HMFLogging, NSCopying, NSMutableCopying> {
    NSMapTable * _classReadOnlyVersionCache;
    NSMapTable * _classToNameTransform;
    NSMapTable * _classUnavailableVersionCache;
    HMFVersion * _dataVersion;
    HMFVersion * _legacyDataVersion;
    HMBLocalZone * _localZone;
    <HMBMirrorProtocol> * _mirror;
    NSMapTable * _nameToClassTransform;
    NSMapTable * _objectPropertyHashLookup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _propertyLock;
    NSMapTable * _queryFieldsCache;
}

@property (nonatomic, retain) NSMapTable *classReadOnlyVersionCache;
@property (nonatomic, copy) NSMapTable *classToNameTransform;
@property (nonatomic, retain) NSMapTable *classUnavailableVersionCache;
@property (nonatomic, readonly, copy) HMFVersion *dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HMFVersion *legacyDataVersion;
@property (nonatomic, readonly) HMBLocalZone *localZone;
@property (nonatomic, readonly) <HMBMirrorProtocol> *mirror;
@property (nonatomic, copy) NSMapTable *nameToClassTransform;
@property (nonatomic, retain) NSMapTable *objectPropertyHashLookup;
@property (nonatomic, readonly) NSMapTable *queryFieldsCache;
@property (readonly) Class superclass;

+ (id)allowedTypes;
+ (id)decodeAsNSDictionary:(id)arg1 error:(id*)arg2;
+ (id)decodeAsOPACK:(id)arg1 error:(id*)arg2;
+ (id)encodeAsNSDictionary:(id)arg1 error:(id*)arg2;
+ (id)encodeAsOPACK:(id)arg1 error:(id*)arg2;
+ (id)internalAllowedTypes;
+ (id)logCategory;

- (void).cxx_destruct;
- (Class)_modelClassFromDictionary:(id)arg1 typeName:(id)arg2 error:(id*)arg3;
- (unsigned long long)bestModelEncodingForStorageLocation:(unsigned long long)arg1;
- (id)classReadOnlyVersionCache;
- (id)classToNameTransform;
- (id)classUnavailableVersionCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataFromModel:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 updatedModelIDs:(id)arg4 error:(id*)arg5;
- (id)dataVersion;
- (id)decodePropertyValueFromData:(id)arg1 forProperty:(id)arg2 field:(id)arg3 storageLocation:(unsigned long long)arg4 error:(id*)arg5;
- (id)encodePropertyValue:(id)arg1 forProperty:(id)arg2 field:(id)arg3 storageLocation:(unsigned long long)arg4 error:(id*)arg5;
- (id)init;
- (id)initWithDataVersion:(id)arg1 legacyDataVersion:(id)arg2;
- (id)legacyDataVersion;
- (id)localZone;
- (id)mirror;
- (Class)modelClassForTypeName:(id)arg1;
- (id)modelFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 error:(id*)arg4;
- (id)modelFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 type:(id)arg4 error:(id*)arg5;
- (id)modelFromDictionary:(id)arg1 storageLocation:(unsigned long long)arg2 typeName:(id)arg3 error:(id*)arg4;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nameToClassTransform;
- (id)objectPropertyHashLookup;
- (id)queryFieldsCache;
- (id)readOnlyVersionsForModelClass:(Class)arg1;
- (id)schemaHashForModel:(id)arg1;
- (void)setClassReadOnlyVersionCache:(id)arg1;
- (void)setClassToNameTransform:(id)arg1;
- (void)setClassUnavailableVersionCache:(id)arg1;
- (void)setNameToClassTransform:(id)arg1;
- (void)setObjectPropertyHashLookup:(id)arg1;
- (id)typeNameForModelClass:(Class)arg1;
- (id)unavailableVersionsForModelClass:(Class)arg1;
- (void)updateLocalZone:(id)arg1;
- (void)updateMirror:(id)arg1;

@end
