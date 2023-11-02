
@interface BLFamilyCircleController : NSObject {
    NSMutableSet * _cachedDSIDs;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableSet * _ignoredDSIDs;
}

@property (nonatomic, retain) NSMutableSet *cachedDSIDs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSMutableSet *ignoredDSIDs;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cachedDSIDs;
- (id)dispatchQueue;
- (void)dq_processFamilyCircle:(id)arg1 completion:(id /* block */)arg2;
- (id)ignoredDSIDs;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (void)setCachedDSIDs:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setIgnoredDSIDs:(id)arg1;

@end
