
@protocol RTIInputSystemClientDelegate <NSObject>

@optional

- (void)connectionInterrupted:(NSString *)arg1;
- (void)connectionInvalidated:(NSString *)arg1;
- (void)defaultDocumentRequestDidChange:(RTIDocumentRequest *)arg1;
- (void)performDocumentRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: RTIDocumentRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RTIDocumentState *, void*
- (void)performTextOperations:(RTITextOperations *)arg1;
- (void)performTextOperations:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 7: RTITextOperations *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@end
