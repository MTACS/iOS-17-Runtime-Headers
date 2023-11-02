
@protocol HKSampleTypeUpdateControllerObserver <NSObject>

@required

- (void)updateController:(HKSampleTypeUpdateController *)arg1 didReceiveHighFrequencyUpdateForType:(HKObjectType *)arg2;
- (void)updateController:(HKSampleTypeUpdateController *)arg1 didReceiveUpdateForType:(HKObjectType *)arg2 samplesAdded:(NSArray *)arg3 objectsRemoved:(NSArray *)arg4 recoveringFromError:(bool)arg5;

@end
