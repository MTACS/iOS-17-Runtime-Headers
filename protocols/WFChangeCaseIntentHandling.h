
@protocol WFChangeCaseIntentHandling <NSObject>

@required

- (void)handleChangeCase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFChangeCaseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFChangeCaseIntentResponse *, void*
- (void)resolveTextForChangeCase:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFChangeCaseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveTypeForChangeCase:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFChangeCaseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFChangeCaseTypeResolutionResult *, void*

@optional

- (void)confirmChangeCase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFChangeCaseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFChangeCaseIntentResponse *, void*

@end
