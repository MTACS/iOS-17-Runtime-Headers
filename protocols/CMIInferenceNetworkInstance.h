
@protocol CMIInferenceNetworkInstance <NSObject>

@required

- (NSArray *)inputTextures;
- (NSArray *)outputTextures;
- (<CMIInferenceNetwork> *)parentNetwork;
- (int)synchronizeMetalWaitOnNetworkSignal:(id <MTLCommandBuffer>)arg1;
- (int)synchronizeNetworkWaitOnMetalSignal:(id <MTLCommandBuffer>)arg1;

@end
