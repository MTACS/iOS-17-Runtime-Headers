
@protocol INSendMessageIntentHandling <NSObject>

@required

- (void)handleSendMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSendMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSendMessageIntentResponse *, void*

@optional

- (void)confirmSendMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSendMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSendMessageIntentResponse *, void*
- (void)resolveContentForSendMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSendMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveGroupNameForSendMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSendMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveOutgoingMessageTypeForSendMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSendMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INOutgoingMessageTypeResolutionResult *, void*
- (void)resolveRecipientsForSendMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSendMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveRecipientsForSendMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSendMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveSpeakableGroupNameForSendMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSendMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSpeakableStringResolutionResult *, void*

@end
