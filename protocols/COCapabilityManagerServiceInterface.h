
@protocol COCapabilityManagerServiceInterface <NSObject>

@required

- (void)addObserverForCapability:(NSString *)arg1 inCluster:(COCluster *)arg2;
- (void)registerCapability:(NSString *)arg1;
- (void)removeObserverForCapability:(NSString *)arg1 inCluster:(COCluster *)arg2;
- (void)unregisterCapability:(NSString *)arg1;

@end
