
@protocol HKSampleQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverSamples:(NSArray *)arg1 clearPendingSamples:(bool)arg2 isFinalBatch:(bool)arg3 queryUUID:(NSUUID *)arg4;

@end
