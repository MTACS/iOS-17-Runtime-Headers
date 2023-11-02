
@protocol INSearchForMessagesIntentHandling <NSObject>

@required

- (void)handleSearchForMessages:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMessagesIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSearchForMessagesIntentResponse *, void*

@optional

- (void)confirmSearchForMessages:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMessagesIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSearchForMessagesIntentResponse *, void*
- (void)resolveAttributesForSearchForMessages:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMessagesIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INMessageAttributeOptionsResolutionResult *, void*
- (void)resolveDateTimeRangeForSearchForMessages:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMessagesIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsRangeResolutionResult *, void*
- (void)resolveGroupNamesForSearchForMessages:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMessagesIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveRecipientsForSearchForMessages:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMessagesIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveSendersForSearchForMessages:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMessagesIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveSpeakableGroupNamesForSearchForMessages:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMessagesIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end