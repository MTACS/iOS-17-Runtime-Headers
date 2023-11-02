
@protocol SRUIFSpeechRequestHandlerDelegate

@required

- (AFConnection *)connectionForSpeechRequestHandler:(SRUIFSpeechRequestHandler *)arg1;
- (void)sendContextForSpeechRequestContinuationWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)speechRequestHandlerDidCancelSpeechRequest:(SRUIFSpeechRequestHandler *)arg1;
- (bool)speechRequestHandlerShouldRollBackRequestForSpeechCancellation:(SRUIFSpeechRequestHandler *)arg1;
- (void)speechRequestHandlerWillCancelSpeechRequest:(SRUIFSpeechRequestHandler *)arg1;

@end
