
@protocol DismissTimerIntentHandling <NSObject>

@required

- (void)handleDismissTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DismissTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DismissTimerIntentResponse *, void*
- (void)handleDismissTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DismissTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DismissTimerIntentResponse *, void*

@optional

- (void)confirmDismissTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DismissTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DismissTimerIntentResponse *, void*
- (void)confirmDismissTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DismissTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DismissTimerIntentResponse *, void*

@end
