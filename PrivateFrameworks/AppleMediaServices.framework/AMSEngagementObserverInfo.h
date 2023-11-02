
@interface AMSEngagementObserverInfo : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableSet * _underlyingPlacements;
    NSMutableSet * _underlyingServiceTypes;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSSet *placements;
@property (nonatomic, readonly) NSSet *serviceTypes;
@property (nonatomic, retain) NSMutableSet *underlyingPlacements;
@property (nonatomic, retain) NSMutableSet *underlyingServiceTypes;

- (void).cxx_destruct;
- (void)addPlacements:(id)arg1;
- (void)addServiceType:(id)arg1;
- (id)dispatchQueue;
- (id)initWithQueue:(id)arg1;
- (id)placements;
- (void)removePlacement:(id)arg1;
- (void)removeServiceType:(id)arg1;
- (id)serviceTypes;
- (void)setDispatchQueue:(id)arg1;
- (void)setUnderlyingPlacements:(id)arg1;
- (void)setUnderlyingServiceTypes:(id)arg1;
- (id)underlyingPlacements;
- (id)underlyingServiceTypes;

@end
