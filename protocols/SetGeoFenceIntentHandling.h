
@protocol SetGeoFenceIntentHandling <NSObject>

@required

- (void)handleSetGeoFence:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetGeoFenceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetGeoFenceIntentResponse *, void*
- (void)handleSetGeoFence:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetGeoFenceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetGeoFenceIntentResponse *, void*
- (void)resolveFriendForSetGeoFence:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetGeoFenceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetGeoFenceFriendResolutionResult *, void*
- (void)resolveFriendForSetGeoFence:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetGeoFenceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetGeoFenceFriendResolutionResult *, void*
- (void)resolveLocationForSetGeoFence:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetGeoFenceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetGeoFenceLocationResolutionResult *, void*
- (void)resolveLocationForSetGeoFence:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetGeoFenceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetGeoFenceLocationResolutionResult *, void*

@optional

- (void)confirmSetGeoFence:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetGeoFenceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetGeoFenceIntentResponse *, void*
- (void)confirmSetGeoFence:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetGeoFenceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetGeoFenceIntentResponse *, void*

@end
