
@protocol RTIInputSystemDelegate <NSObject>

@required

- (void)inputSystemService:(RTIInputSystemService *)arg1 didCreateInputSession:(RTIInputSystemServiceSession *)arg2;

@optional

- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 didAddRTISupplementalLexicon:(RTISupplementalLexicon *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 didAddSupplementalLexicon:(TISupplementalLexicon *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 didRemoveRTISupplementalLexicon:(RTISupplementalLexicon *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 didRemoveSupplementalLexicon:(TISupplementalLexicon *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 documentStateDidChange:(RTIDocumentState *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 documentTraitsDidChange:(RTIDocumentTraits *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 performInputOperation:(RTIInputOperation *)arg3;
- (void)inputSystemService:(void *)arg1 inputSession:(void *)arg2 performInputOperation:(void *)arg3 withResponse:(void *)arg4; // needs 4 arg types, found 9: RTIInputSystemService *, RTIInputSystemServiceSession *, RTIInputOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 textSuggestionsChanged:(NSData *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidBegin:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidBegin:(RTIInputSystemServiceSession *)arg2 options:(RTISessionOptions *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidDie:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidEnd:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidEnd:(RTIInputSystemServiceSession *)arg2 options:(RTISessionOptions *)arg3;
- (void)inputSystemService:(void *)arg1 inputSessionDidEnd:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: RTIInputSystemService *, RTIInputSystemServiceSession *, RTISessionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidPause:(RTIInputSystemServiceSession *)arg2 withReason:(NSString *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidUnpause:(RTIInputSystemServiceSession *)arg2 withReason:(NSString *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDocumentDidChange:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 prepareForInputSession:(RTIInputSystemSession *)arg2 options:(RTISessionOptions *)arg3;

@end
