
@interface QLPreviewURLProtocol : NSURLProtocol

+ (void)_dumpPendingProtocols;
+ (id)_errorForAbort;
+ (id)_errorForCancel;
+ (void)_unregisterURL:(id)arg1;
+ (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(bool)arg3;
+ (bool)canInitWithRequest:(id)arg1;
+ (void)cancelLoadingProtocol:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)errorForURL:(id)arg1;
+ (void)initialize;
+ (bool)isSafeRequest:(id)arg1;
+ (bool)isSafeURL:(id)arg1;
+ (id)mimeTypeForAttachmentURL:(id)arg1;
+ (id)newURLWithContentID:(id)arg1 baseURL:(id)arg2;
+ (id)newUniqueURLWithName:(id)arg1;
+ (id)protocolScheme;
+ (void)registerPreview:(id)arg1 forPreviewURL:(id)arg2;
+ (void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (void)setError:(id)arg1 forURL:(id)arg2;
+ (void)startLoadingProtocol:(id)arg1;
+ (void)stopLoadingProtocol:(id)arg1;
+ (void)stopLoadingProtocol:(id)arg1 isCancel:(bool)arg2;
+ (void)unregisterURLs:(id)arg1 andPreviewURL:(id)arg2;

- (void)startLoading;
- (void)stopLoading;

@end
