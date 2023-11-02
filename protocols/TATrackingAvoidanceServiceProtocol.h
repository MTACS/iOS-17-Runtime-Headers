
@protocol TATrackingAvoidanceServiceProtocol <NSObject>

@required

- (void)addObserver:(id <TATrackingAvoidanceServiceObserver>)arg1;
- (void)debugForceSurfaceStagedDetections:(NSData *)arg1 deviceType:(unsigned long long)arg2;
- (void)debugStageTADetection:(NSData *)arg1 deviceType:(unsigned long long)arg2;
- (void)fetchTAUnknownBeacon:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TAUnknownBeacon *, void*
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
- (void)removeObserver:(id <TATrackingAvoidanceServiceObserver>)arg1;

@end
