
@protocol CDMEmbeddingClient

@required

- (void)processEmbeddingRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse *, NSError *, void*
- (void)processEmbeddingRequest:(void *)arg1 requestId:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, SIRINLUEXTERNALRequestID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse *, NSError *, void*
- (void)setupWithLocale:(void *)arg1 embeddingVersion:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSLocale *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
