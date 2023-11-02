
@interface _PXPassthroughCloudCapabilitiesProvider : NSObject <PXCloudCapabilitiesProvider> {
    NSArray * _enabledCapabilities;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) PXObservable *observable;

- (void).cxx_destruct;
- (id)error;
- (id)initWithEnabledCapabilities:(id)arg1;
- (id)observable;
- (void)requestStatusForCapability:(id)arg1 handler:(id /* block */)arg2;
- (void)startGatheringCapabilityStatuses;
- (long long)statusForCapability:(id)arg1;

@end
