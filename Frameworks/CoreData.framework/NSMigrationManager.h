
@interface NSMigrationManager : NSObject {
    NSString * _destinationConfigurationForCloudKitValidation;
    NSDictionary * _destinationEntitiesByVersionHash;
    NSManagedObjectContext * _destinationManagedObjectContext;
    NSManagedObjectModel * _destinationModel;
    NSMappingModel * _mappingModel;
    NSError * _migrationCancellationError;
    NSMigrationContext * _migrationContext;
    struct _migrationManagerFlags { 
        unsigned int _migrationWasCancelled : 1; 
        unsigned int _usesStoreSpecificMigrationManager : 1; 
        unsigned int _migrationWasInPlace : 1; 
        unsigned int _forcedMigration : 1; 
        unsigned int _reservedMigrationManager : 28; 
    }  _migrationManagerFlags;
    id  _reserved1;
    id  _reserved2;
    id  _reserved3;
    id  _reserved4;
    NSDictionary * _sourceEntitiesByVersionHash;
    NSManagedObjectContext * _sourceManagedObjectContext;
    NSManagedObjectModel * _sourceModel;
    NSString * _stageLabel;
    NSDictionary * _userInfo;
}

@property (readonly) NSEntityMapping *currentEntityMapping;
@property (nonatomic, retain) NSString *destinationConfigurationForCloudKitValidation;
@property (readonly) NSManagedObjectContext *destinationContext;
@property (readonly) NSManagedObjectModel *destinationModel;
@property (readonly) NSMappingModel *mappingModel;
@property (readonly) float migrationProgress;
@property (readonly) NSManagedObjectContext *sourceContext;
@property (readonly) NSManagedObjectModel *sourceModel;
@property (nonatomic, retain) NSDictionary *userInfo;
@property bool usesStoreSpecificMigrationManager;

+ (bool)_canMigrateWithMappingModel:(id)arg1;
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;

- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (void)cancelMigrationWithError:(id)arg1;
- (id)currentEntityMapping;
- (id)currentPropertyMapping;
- (void)dealloc;
- (id)destinationConfigurationForCloudKitValidation;
- (id)destinationContext;
- (id)destinationEntityForEntityMapping:(id)arg1;
- (id)destinationInstancesForEntityMappingNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)destinationInstancesForSourceRelationshipNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)destinationModel;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 includesSubentities:(bool)arg3;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (id)mappingModel;
- (bool)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8;
- (float)migrationProgress;
- (void)reset;
- (void)setDestinationConfigurationForCloudKitValidation:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUsesStoreSpecificMigrationManager:(bool)arg1;
- (id)sourceContext;
- (id)sourceEntityForEntityMapping:(id)arg1;
- (id)sourceInstancesForEntityMappingNamed:(id)arg1 destinationInstances:(id)arg2;
- (id)sourceModel;
- (id)userInfo;
- (bool)usesStoreSpecificMigrationManager;

@end
