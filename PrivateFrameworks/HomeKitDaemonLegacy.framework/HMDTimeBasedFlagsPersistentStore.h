
@interface HMDTimeBasedFlagsPersistentStore : NSObject <HMDTimeBasedFlagsStoring> {
    <HMDPersistentStore> * _persistentStore;
}

@property (nonatomic, readonly) <HMDPersistentStore> *persistentStore;

- (void).cxx_destruct;
- (void)archiveDictionary:(id)arg1;
- (id)initWithPersistentStore:(id)arg1;
- (id)persistentStore;
- (id)unarchive;
- (id)unarchiveLegacyEventFlags;

@end
