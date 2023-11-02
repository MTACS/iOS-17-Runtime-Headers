
@interface HDOntologyShardImporter : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _lock_importerClassesBySchemaType;
    HKObserverSet<HDOntologyShardImporterObserver> * _ontologyShardImporterObservers;
    HDOntologyUpdateCoordinator * _updateCoordinator;
}

@property (nonatomic, readonly, copy) NSDictionary *importerClasses;
@property (nonatomic, readonly) HDOntologyUpdateCoordinator *updateCoordinator;

- (void).cxx_destruct;
- (void)addOntologyShardImporterObserver:(id)arg1 queue:(id)arg2;
- (bool)importStagedShardFilesWithError:(id*)arg1;
- (id)importerClasses;
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)arg1;
- (void)removeOntologyShardImporterObserver:(id)arg1;
- (id)updateCoordinator;

@end
