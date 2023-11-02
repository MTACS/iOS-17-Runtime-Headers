
@interface HMDCoreDataCloudTransformMergePolicy : NSMergePolicy <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (id)init;
- (bool)resolveOptimisticLockingVersionConflicts:(id)arg1 error:(id*)arg2;

@end
