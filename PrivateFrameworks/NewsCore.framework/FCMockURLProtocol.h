
@interface FCMockURLProtocol : NSURLProtocol

+ (id)URLForData:(id)arg1 mimeType:(id)arg2;
+ (id)URLForData:(id)arg1 mimeType:(id)arg2 statusCode:(unsigned long long)arg3;
+ (id)URLForError:(id)arg1;
+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)startLoading;
- (void)stopLoading;

@end
