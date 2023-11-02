
@interface NSPersistentStore : NSObject {
    NSString * _configurationName;
    NSPersistentStoreCoordinator * _coordinator;
    id  _coreSpotlightDelegate;
    id  _defaultFaultHandler;
    struct __CFSet { } * _entitiesInConfiguration;
    struct _objectStoreFlags { 
        unsigned int isReadOnly : 1; 
        unsigned int cleanOnRemove : 1; 
        unsigned int isMDDirty : 1; 
        unsigned int _RESERVED : 29; 
    }  _flags;
    id  _managedObjectModel;
    id * _oidFactories;
    NSDictionary * _options;
    void * _temporaryIDClass;
    NSURL * _url;
}

@property (retain) NSURL *URL;
@property (readonly, copy) NSString *configurationName;
@property (nonatomic, readonly) NSCoreDataCoreSpotlightDelegate *coreSpotlightExporter;
@property (copy) NSString *identifier;
@property (nonatomic, retain) NSDictionary *metadata;
@property (readonly) NSDictionary *options;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (getter=isReadOnly) bool readOnly;
@property (readonly, copy) NSString *type;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (bool)_rekeyPersistentStoreAtURL:(id)arg1 options:(id)arg2 withKey:(id)arg3 error:(id*)arg4;
+ (bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (bool)accessInstanceVariablesDirectly;
+ (id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)doURLStuff:(id)arg1 createdStubFile:(bool*)arg2 readOnly:(bool*)arg3 error:(id*)arg4 options:(id)arg5;
+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (Class)migrationManagerClass;
+ (Class)rowCacheClass;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;

- (id)URL;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (void)_didLoadMetadata;
- (struct __CFSet { }*)_entitiesForConfiguration;
- (bool)_hasActiveGenerations;
- (bool)_isCloudKitOptioned;
- (bool)_isPersistentStoreAlive;
- (void)_mapsSyncDidUnregisterObjectsWithIDs_112229675:(id)arg1;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (Class)_objectIDClass;
- (id)_persistentStoreCoordinator;
- (void)_preflightCrossCheck;
- (bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)_rawMetadata__;
- (void)_rebuildIndiciesSynchronously:(bool)arg1;
- (void)_setMetadataDirty:(bool)arg1;
- (void)_setupObserver;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (bool)_unload:(id*)arg1;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(bool)arg2;
- (id)ancillaryModels;
- (id)configurationName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightExporter;
- (id)currentChangeToken;
- (id)currentQueryGeneration;
- (void)dealloc;
- (id)description;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (void)doFilesystemCleanupOnRemove:(bool)arg1;
- (unsigned long long)entityIDForEntityDescription:(id)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (bool)finishDeferredLightweightMigration:(bool)arg1 withError:(id*)arg2;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (bool)isCloudKitEnabled;
- (bool)isReadOnly;
- (bool)load:(id*)arg1;
- (bool)loadMetadata:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)metadata;
- (id)mirroringDelegate;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)objectIDFactoryForEntity:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)options;
- (id)persistentStoreCoordinator;
- (id)propertyNamesInHistoryChangeDataForEntityDescription:(id)arg1;
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setURL:(id)arg1;
- (bool)supportsConcurrentRequestHandling;
- (bool)supportsGenerationalQuerying;
- (id)type;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)hmd_deletedModelIDsForEntity:(id)arg1 modelIDKey:(id)arg2 duration:(double)arg3 context:(id)arg4;
- (bool)hmd_modelWasDeletedWithID:(id)arg1 modelIDKey:(id)arg2 entity:(id)arg3 duration:(double)arg4 context:(id)arg5;
- (id)hmd_tombstonesForEntity:(id)arg1 duration:(double)arg2 context:(id)arg3 error:(id*)arg4;

@end
