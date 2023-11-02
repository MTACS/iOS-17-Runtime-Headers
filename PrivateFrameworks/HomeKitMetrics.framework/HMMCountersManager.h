
@interface HMMCountersManager : NSObject {
    HMMDateProvider * _dateProvider;
    NSMutableDictionary * _homeGroups;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _namedGroups;
    HMMDailyPartitionProvider * _partitionProvider;
    HMMCoreDataCounterStorage * _primaryStorage;
}

@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (nonatomic, readonly) NSMutableDictionary *homeGroups;
@property (nonatomic, readonly) NSMutableDictionary *namedGroups;
@property (nonatomic, readonly) HMMDailyPartitionProvider *partitionProvider;
@property (nonatomic, readonly) HMMCoreDataCounterStorage *primaryStorage;

- (void).cxx_destruct;
- (id)counterGroupForHomeUUID:(id)arg1 groupName:(id)arg2;
- (id)counterGroupForHomeUUIDFromLogEvent:(id)arg1 groupName:(id)arg2;
- (id)counterGroupForName:(id)arg1;
- (id)dateProvider;
- (void)deleteCountersAfterDate:(id)arg1;
- (void)deleteCountersBeforeDate:(id)arg1;
- (void)deleteCountersUsingPredicate:(id)arg1;
- (id)homeGroups;
- (id)initWithDataModelName:(id)arg1 atPath:(id)arg2;
- (id)initWithDataModelName:(id)arg1 atPath:(id)arg2 dateProvider:(id)arg3;
- (id)namedGroups;
- (id)partitionProvider;
- (id)primaryStorage;
- (void)save;

@end
