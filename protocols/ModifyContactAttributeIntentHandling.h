
@protocol ModifyContactAttributeIntentHandling <NSObject>

@required

- (void)handleModifyContactAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ModifyContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ModifyContactAttributeIntentResponse *, void*
- (void)handleModifyContactAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ModifyContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ModifyContactAttributeIntentResponse *, void*
- (void)resolveModifyNickNameForModifyContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ModifyContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ModifyContactAttributeModifyNickNameResolutionResult *, void*
- (void)resolveModifyNickNameForModifyContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ModifyContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ModifyContactAttributeModifyNickNameResolutionResult *, void*
- (void)resolveModifyRelationshipForModifyContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ModifyContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ModifyContactAttributeModifyRelationshipResolutionResult *, void*
- (void)resolveModifyRelationshipForModifyContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ModifyContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ModifyContactAttributeModifyRelationshipResolutionResult *, void*
- (void)resolveRelatedSiriMatchesForModifyContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ModifyContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveRelatedSiriMatchesForModifyContactAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ModifyContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmModifyContactAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ModifyContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ModifyContactAttributeIntentResponse *, void*
- (void)confirmModifyContactAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ModifyContactAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ModifyContactAttributeIntentResponse *, void*

@end
