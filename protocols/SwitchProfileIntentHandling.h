
@protocol SwitchProfileIntentHandling <NSObject>

@required

- (void)handleSwitchProfile:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SwitchProfileIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SwitchProfileIntentResponse *, void*
- (void)handleSwitchProfile:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SwitchProfileIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SwitchProfileIntentResponse *, void*
- (void)resolveAccountForSwitchProfile:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SwitchProfileIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SwitchProfileAccountResolutionResult *, void*
- (void)resolveAccountForSwitchProfile:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SwitchProfileIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SwitchProfileAccountResolutionResult *, void*

@optional

- (void)confirmSwitchProfile:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SwitchProfileIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SwitchProfileIntentResponse *, void*
- (void)confirmSwitchProfile:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SwitchProfileIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SwitchProfileIntentResponse *, void*

@end
