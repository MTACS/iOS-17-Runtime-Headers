
@interface _PXOverriddenCloudCapabilitiesProvider : NSObject <PXCloudCapabilitiesProvider> {
    NSDictionary * _overrides;
    <PXCloudCapabilitiesProvider> * _subProvider;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) PXObservable *observable;

- (void).cxx_destruct;
- (id)error;
- (id)init;
- (id)initWithCloudCapabilitiesProvider:(id)arg1 overrides:(id)arg2;
- (id)observable;
- (void)requestStatusForCapability:(id)arg1 handler:(id /* block */)arg2;
- (void)startGatheringCapabilityStatuses;
- (long long)statusForCapability:(id)arg1;

@end
