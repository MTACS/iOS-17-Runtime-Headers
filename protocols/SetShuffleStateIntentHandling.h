
@protocol SetShuffleStateIntentHandling <NSObject>

@required

- (void)handleSetShuffleState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetShuffleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetShuffleStateIntentResponse *, void*
- (void)handleSetShuffleState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetShuffleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetShuffleStateIntentResponse *, void*
- (void)resolveDevicesForSetShuffleState:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetShuffleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDevicesForSetShuffleState:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetShuffleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmSetShuffleState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetShuffleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetShuffleStateIntentResponse *, void*
- (void)confirmSetShuffleState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetShuffleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetShuffleStateIntentResponse *, void*

@end
