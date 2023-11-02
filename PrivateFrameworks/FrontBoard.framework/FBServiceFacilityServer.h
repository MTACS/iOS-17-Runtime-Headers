
@interface FBServiceFacilityServer : NSObject <BSServiceConnectionListenerDelegate, FBSServiceFacilityManaging> {
    BSServiceDomainSpecification * _domain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_completedMilestones;
    NSMutableDictionary * _lock_facilitiesByIdentifier;
    NSMutableSet * _lock_pendingConnects;
    NSMutableDictionary * _lock_suspendedFacilitiesByIdentifier;
    BSServiceConnectionListener * _serviceListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) BSServiceDomainSpecification *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)sharedInstanceDomain;

- (void).cxx_destruct;
- (void)_facilityQueue_facility:(id)arg1 handleMessage:(id)arg2 client:(id)arg3;
- (id)_initWithDomain:(id)arg1;
- (bool)_lock_areFacilityPrerequisitesSatisfied:(id)arg1;
- (void)_lock_evaluateSuspendedFacility:(id)arg1;
- (void)addFacility:(id)arg1;
- (void)dealloc;
- (id)domain;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)noteMilestoneReached:(id)arg1;
- (void)removeFacility:(id)arg1;
- (void)run;

@end
