
@interface HMDBackingStoreResidentUpdateResult : NSObject {
    NSSet * _addedResidentDevices;
    NSSet * _deletedResidentDevices;
    NSSet * _reachabilityUpdates;
}

@property (nonatomic, copy) NSSet *addedResidentDevices;
@property (nonatomic, copy) NSSet *deletedResidentDevices;
@property (nonatomic, copy) NSSet *reachabilityUpdates;

- (void).cxx_destruct;
- (id)addedResidentDevices;
- (id)deletedResidentDevices;
- (id)initWithAddedResidentDevices:(id)arg1 deletedResidentDevices:(id)arg2 reachabilityUpdates:(id)arg3;
- (id)reachabilityUpdates;
- (void)setAddedResidentDevices:(id)arg1;
- (void)setDeletedResidentDevices:(id)arg1;
- (void)setReachabilityUpdates:(id)arg1;

@end
