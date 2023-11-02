
@protocol CloseAppIntentHandling <NSObject>

@required

- (void)handleCloseApp:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CloseAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CloseAppIntentResponse *, void*
- (void)handleCloseApp:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CloseAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CloseAppIntentResponse *, void*
- (void)resolveApplicationForCloseApp:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CloseAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CloseAppApplicationResolutionResult *, void*
- (void)resolveApplicationForCloseApp:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CloseAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CloseAppApplicationResolutionResult *, void*

@optional

- (void)confirmCloseApp:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CloseAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CloseAppIntentResponse *, void*
- (void)confirmCloseApp:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CloseAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CloseAppIntentResponse *, void*

@end
