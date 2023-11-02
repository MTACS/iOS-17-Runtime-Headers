
@interface HDDeviceContextStoreManager : NSObject {
    HDProfile * _profile;
}

@property (nonatomic) HDProfile *profile;

+ (id)new;

- (void).cxx_destruct;
- (bool)deleteDeviceContext:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)enumerateAllEntriesWithError:(id*)arg1 handler:(id /* block */)arg2;
- (id)fetchAllEntriesWithError:(id*)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (bool)insertOrUpdateDeviceContext:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)lookupOrCreateDeviceContextForCurrentSyncIdentityWithError:(id*)arg1;
- (id)numberOfDeviceContextsPerDeviceType:(id*)arg1;
- (id)profile;
- (void)setProfile:(id)arg1;
- (bool)updateSoftwareVersionForCurrentSyncIdentityWithError:(id*)arg1;

@end
