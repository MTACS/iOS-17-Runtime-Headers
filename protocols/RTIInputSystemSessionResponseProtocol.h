
@protocol RTIInputSystemSessionResponseProtocol <NSObject>

@optional

- (oneway void)performDocumentRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: RTIDocumentRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RTIDocumentState *, void*
- (oneway void)performTextOperations:(RTITextOperations *)arg1;
- (oneway void)performTextOperations:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 7: RTITextOperations *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (oneway void)updateDefaultDocumentRequest:(RTIDocumentRequest *)arg1;

@end
