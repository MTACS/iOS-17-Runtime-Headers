
@protocol COCapabilityManagerClientInterface <NSObject>

@required

- (void)availabilityChanged:(bool)arg1 ofCapability:(NSString *)arg2 inCluster:(COCluster *)arg3;

@end
