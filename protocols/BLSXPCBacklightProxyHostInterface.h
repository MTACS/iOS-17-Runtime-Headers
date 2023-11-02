
@protocol BLSXPCBacklightProxyHostInterface <NSObject>

@required

- (bool)deviceSupportsAlwaysOn;
- (NSNumber *)getBacklightState;
- (NSNumber *)getFlipbookState;
- (bool)isAlwaysOnEnabled;
- (bool)isTransitioning;
- (oneway void)nowObservingWithMask:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: BLSXPCBacklightProxyObserverMask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSError *)performChangeRequest:(BLSBacklightChangeRequest *)arg1;

@end
