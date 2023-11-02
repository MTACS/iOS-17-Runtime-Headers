
@protocol RTIInputSystemSessionDelegate <NSObject>

@optional

- (void)inputSession:(RTIInputSystemSession *)arg1 didAddRTISupplementalLexicon:(RTISupplementalLexicon *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 didAddSupplementalLexicon:(TISupplementalLexicon *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 didChangePause:(bool)arg2 withReason:(NSString *)arg3;
- (void)inputSession:(RTIInputSystemSession *)arg1 didRemoveRTISupplementalLexicon:(RTISupplementalLexicon *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 didRemoveSupplementalLexicon:(TISupplementalLexicon *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 documentStateDidChange:(RTIDocumentState *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 documentTraitsDidChange:(RTIDocumentTraits *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 performInputOperation:(RTIInputOperation *)arg2;
- (void)inputSession:(void *)arg1 performInputOperation:(void *)arg2 withResponse:(void *)arg3; // needs 3 arg types, found 8: RTIInputSystemSession *, RTIInputOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)inputSession:(RTIInputSystemSession *)arg1 textSuggestionsChanged:(NSData *)arg2;
- (void)inputSessionDidBegin:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidBegin:(RTIInputSystemSession *)arg1 options:(RTISessionOptions *)arg2;
- (void)inputSessionDidDie:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidEnd:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidEnd:(RTIInputSystemSession *)arg1 options:(RTISessionOptions *)arg2;
- (void)inputSessionDidEnd:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: RTIInputSystemSession *, RTISessionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareForInputSession:(RTIInputSystemSession *)arg1 options:(RTISessionOptions *)arg2;

@end
