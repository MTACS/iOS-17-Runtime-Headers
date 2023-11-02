
@interface CNContactImageStore : NSObject {
    CNContactMetadataPersistentStoreManager * _storeManager;
}

@property (nonatomic, retain) CNContactMetadataPersistentStoreManager *storeManager;

+ (long long)maximumContactImagesPerContact;

- (void).cxx_destruct;
- (void)ensureImageQuotasForImages:(id)arg1 adddedImagesCount:(long long)arg2 inContext:(id)arg3;
- (id)init;
- (id)initWithContactMetadataStoreManager:(id)arg1;
- (void)insertContactImage:(id)arg1 withContactIdentifier:(id)arg2 inContext:(id)arg3;
- (id)managedObjectsToContactImages:(id)arg1;
- (id)performFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)performSaveRequest:(id)arg1 error:(id*)arg2;
- (void)setStoreManager:(id)arg1;
- (id)storeManager;
- (bool)updateExistingImages:(id)arg1 withContactImage:(id)arg2;
- (bool)updateOrInsertNewContactImages:(id)arg1 forContactIdentifier:(id)arg2 inContext:(id)arg3 error:(id*)arg4;

@end
