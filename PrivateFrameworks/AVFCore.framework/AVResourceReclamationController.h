
@interface AVResourceReclamationController : NSObject {
    NSObject<OS_dispatch_queue> * queue;
    NSHashTable * weakResourceReclaimableObjects;
}

+ (id)defaultController;

- (bool)_isTrackingObject:(id)arg1;
- (void)_removeAllObjectsTestOnly;
- (void)addObjectForTrackingOnQueue:(id)arg1;
- (void)addObjectsWithReclaimableResources:(id)arg1;
- (void)dealloc;
- (id)init;

@end
