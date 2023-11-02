
@protocol INUnsendMessagesIntentHandling <NSObject>

@required

- (void)handleUnsendMessages:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INUnsendMessagesIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INUnsendMessagesIntentResponse *, void*

@optional

- (void)confirmUnsendMessages:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INUnsendMessagesIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INUnsendMessagesIntentResponse *, void*

@end
