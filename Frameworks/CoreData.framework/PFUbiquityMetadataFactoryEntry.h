
@interface PFUbiquityMetadataFactoryEntry : NSObject {
    PFUbiquityMetadataFactoryFilePresenter * _filePresenter;
    PFUbiquityLocation * _metadataStoreFileLocation;
    NSPersistentStoreCoordinator * _psc;
    NSPersistentStore * _store;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithMetadataStoreFileLocation:(id)arg1;

@end
