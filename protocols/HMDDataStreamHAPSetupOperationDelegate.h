
@protocol HMDDataStreamHAPSetupOperationDelegate <HMDDataStreamSetupOperationDelegate>

@required

- (void)dataStreamInitializationSetupOperation:(id <HMDDataStreamSetupOperationMTU>)arg1 didCompleteSupportReadWithStatus:(bool)arg2;

@end
