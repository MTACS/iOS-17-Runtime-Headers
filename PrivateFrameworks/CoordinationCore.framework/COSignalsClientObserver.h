
@interface COSignalsClientObserver : COClientObserver {
    COHomeKitAccessoryMemento * _accessory;
    bool  _canDispatch;
    NSSet * _constraints;
    NSObject<OS_nw_activity> * _dispatchabilityStallActivity;
    unsigned long long  _dispatchabilityStallCount;
}

@property (nonatomic, readonly, copy) COHomeKitAccessoryMemento *accessory;
@property (nonatomic) bool canDispatch;
@property (nonatomic, readonly, copy) NSSet *constraints;
@property (nonatomic, retain) NSObject<OS_nw_activity> *dispatchabilityStallActivity;
@property (nonatomic) unsigned long long dispatchabilityStallCount;

- (void).cxx_destruct;
- (id)accessory;
- (bool)canDispatch;
- (id)constraints;
- (id)dispatchabilityStallActivity;
- (unsigned long long)dispatchabilityStallCount;
- (id)initWithConnection:(id)arg1 asAccessory:(id)arg2 constraints:(id)arg3 cluster:(id)arg4;
- (id)initWithConnection:(id)arg1 cluster:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setCanDispatch:(bool)arg1;
- (void)setDispatchabilityStallActivity:(id)arg1;
- (void)setDispatchabilityStallCount:(unsigned long long)arg1;

@end
