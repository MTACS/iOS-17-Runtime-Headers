
@protocol HKWorkoutBuilderSampleQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverQuantities:(NSArray *)arg1 hasFinishedHistoricalFetch:(bool)arg2 queryUUID:(NSUUID *)arg3;
- (void)client_deliverSamples:(NSArray *)arg1 hasFinishedHistoricalFetch:(bool)arg2 queryUUID:(NSUUID *)arg3;

@end
