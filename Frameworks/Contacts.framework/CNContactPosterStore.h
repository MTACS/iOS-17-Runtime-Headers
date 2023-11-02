
@interface CNContactPosterStore : NSObject {
    CNContactMetadataPersistentStoreManager * _storeManager;
}

@property (nonatomic, retain) CNContactMetadataPersistentStoreManager *storeManager;

+ (long long)maximumContactPostersPerContact;

- (void).cxx_destruct;
- (void)ensurePosterQuotasForPosters:(id)arg1 addedPostersCount:(long long)arg2 inContext:(id)arg3;
- (id)init;
- (id)initWithContactMetadataStoreManager:(id)arg1;
- (void)insertContactPoster:(id)arg1 withContactIdentifier:(id)arg2 inContext:(id)arg3;
- (id)managedObjectsToContactPosters:(id)arg1;
- (id)performFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)performSaveRequest:(id)arg1 error:(id*)arg2;
- (void)setStoreManager:(id)arg1;
- (id)storeManager;
- (bool)updateExistingPosters:(id)arg1 withContactPoster:(id)arg2;
- (bool)updateOrInsertNewContactPosters:(id)arg1 forContactIdentifier:(id)arg2 inContext:(id)arg3 error:(id*)arg4;

@end
