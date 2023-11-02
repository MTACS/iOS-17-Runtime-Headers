
@interface HMMNamedCounterGroup : NSObject <HMMCounterGroup> {
    HMMNamedGroup * _coreDataGroup;
    long long  _coreDataGroupToken;
    NSString * _groupName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _observers;
    <HMMCounterDatePartitionProvider> * _partitionProvider;
    HMMCoreDataCounterStorage * _primaryStorage;
}

@property (nonatomic, retain) HMMNamedGroup *coreDataGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *observers;
@property (nonatomic, readonly) <HMMCounterDatePartitionProvider> *partitionProvider;
@property (nonatomic, readonly) HMMCoreDataCounterStorage *primaryStorage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forCounterName:(id)arg2;
- (id)coreDataGroup;
- (id)coreDataGroupUsingContext:(id)arg1;
- (id)countersInDatePartition:(id)arg1;
- (id)datePartitions;
- (id)groupName;
- (void)incrementCounter:(id)arg1;
- (void)incrementCounter:(id)arg1 by:(long long)arg2;
- (id)initWithGroupName:(id)arg1 partitionProvider:(id)arg2 primaryStorage:(id)arg3;
- (void)notifyObserversForCounter:(id)arg1 previousCount:(long long)arg2 newCount:(long long)arg3;
- (id)observers;
- (id)observersForCounter:(id)arg1;
- (id)partitionProvider;
- (id)primaryStorage;
- (void)sampleValue:(long long)arg1 forCounter:(id)arg2;
- (void)setCoreDataGroup:(id)arg1;
- (bool)statisticsForCounter:(id)arg1 inDatePartition:(id)arg2 minValue:(long long*)arg3 maxValue:(long long*)arg4 average:(long long*)arg5 updateCount:(long long*)arg6;
- (long long)sumOfCountersInDatePartition:(id)arg1;
- (long long)valueForCounter:(id)arg1 inDatePartition:(id)arg2;

@end
