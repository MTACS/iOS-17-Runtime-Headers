
@protocol GetContactAttributeIntentHandling <NSObject>

@required

- (void)handleGetContactAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetContactAttributeIntentResponse *, void*
- (void)handleGetContactAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetContactAttributeIntentResponse *, void*
- (void)resolveContactAttributeToGetForGetContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetContactAttributeContactAttributeToGetResolutionResult *, void*
- (void)resolveContactAttributeToGetForGetContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetContactAttributeContactAttributeToGetResolutionResult *, void*
- (void)resolveContactHandleAlternativesForGetContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveContactHandleAlternativesForGetContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveContactHandleMatchesForGetContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveContactHandleMatchesForGetContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveSiriMatchesForGetContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveSiriMatchesForGetContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmGetContactAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetContactAttributeIntentResponse *, void*
- (void)confirmGetContactAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetContactAttributeIntentResponse *, void*

@end
