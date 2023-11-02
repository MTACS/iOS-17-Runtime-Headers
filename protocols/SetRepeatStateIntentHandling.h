
@protocol SetRepeatStateIntentHandling <NSObject>

@required

- (void)handleSetRepeatState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetRepeatStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetRepeatStateIntentResponse *, void*
- (void)handleSetRepeatState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetRepeatStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetRepeatStateIntentResponse *, void*
- (void)resolveDevicesForSetRepeatState:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetRepeatStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDevicesForSetRepeatState:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetRepeatStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmSetRepeatState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetRepeatStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetRepeatStateIntentResponse *, void*
- (void)confirmSetRepeatState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetRepeatStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetRepeatStateIntentResponse *, void*

@end
