
@interface QLPreviewMultiPartURLProtocol : NSURLProtocol

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (id)protocolScheme;

- (void)startLoading;
- (void)stopLoading;

@end
