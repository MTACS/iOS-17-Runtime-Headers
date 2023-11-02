
@interface HMMTRDoorLock : MTRBaseClusterDoorLock <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void)readAttributeLockTargetStateWithCompletionHandler:(id /* block */)arg1;

@end
