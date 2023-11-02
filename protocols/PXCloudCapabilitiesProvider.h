
@protocol PXCloudCapabilitiesProvider

@required

- (NSError *)error;
- (PXObservable *)observable;
- (void)requestStatusForCapability:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)startGatheringCapabilityStatuses;
- (long long)statusForCapability:(NSString *)arg1;

@end
