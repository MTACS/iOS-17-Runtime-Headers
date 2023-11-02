
@protocol PauseMediaIntentHandling <NSObject>

@required

- (void)handlePauseMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PauseMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PauseMediaIntentResponse *, void*
- (void)handlePauseMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PauseMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PauseMediaIntentResponse *, void*
- (void)resolveDevicesForPauseMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PauseMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDevicesForPauseMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PauseMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmPauseMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PauseMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PauseMediaIntentResponse *, void*
- (void)confirmPauseMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PauseMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PauseMediaIntentResponse *, void*

@end
