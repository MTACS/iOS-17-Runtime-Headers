
@protocol INEditMessageIntentHandling <NSObject>

@required

- (void)handleEditMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INEditMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INEditMessageIntentResponse *, void*

@optional

- (void)confirmEditMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INEditMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INEditMessageIntentResponse *, void*
- (void)resolveEditedContentForEditMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INEditMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*

@end
