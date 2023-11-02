
@protocol WFMatchTextGetGroupIntentHandling <NSObject>

@required

- (void)handleMatchTextGetGroup:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFMatchTextGetGroupIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFMatchTextGetGroupIntentResponse *, void*
- (void)resolveGroupIndexForMatchTextGetGroup:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFMatchTextGetGroupIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFMatchTextGetGroupGroupIndexResolutionResult *, void*
- (void)resolveMatchesForMatchTextGetGroup:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFMatchTextGetGroupIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveTypeForMatchTextGetGroup:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFMatchTextGetGroupIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFMatchTextGetGroupTypeResolutionResult *, void*

@optional

- (void)confirmMatchTextGetGroup:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFMatchTextGetGroupIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFMatchTextGetGroupIntentResponse *, void*

@end
