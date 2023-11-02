
@interface HMDTimeBasedFlagsManager : HMFObject <HMDTimeBasedFlagContext> {
    HMMDateProvider * _dateProvider;
    NSMutableDictionary * _flags;
    <HMDTimeBasedFlagsStoring> * _flagsStorage;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDPersistentStore * _persistentStore;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (retain) HMMDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *flags;
@property (readonly) <HMDTimeBasedFlagsStoring> *flagsStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)allowedSpecifierClasses;

- (void).cxx_destruct;
- (id)_fetchAllFlags;
- (void)_save;
- (id)dateProvider;
- (void)flagChanged;
- (id)flagForName:(id)arg1 homeUUID:(id)arg2 periodicity:(long long)arg3;
- (id)flagForName:(id)arg1 periodicity:(long long)arg2;
- (id)flagForSpecifier:(id)arg1 periodicity:(long long)arg2;
- (id)flags;
- (id)flagsStorage;
- (void)forceSave;
- (id)initWithDateProvider:(id)arg1;
- (id)initWithStorage:(id)arg1 dateProvider:(id)arg2;
- (id)newFlagForPeriodicity:(long long)arg1;
- (void)setDateProvider:(id)arg1;
- (void)setFlags:(id)arg1;
- (id)unarchiveFlags;
- (id)unarchiveLegacyFlags;
- (id)workQueue;

@end
