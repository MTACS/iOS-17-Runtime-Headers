
@interface NSAboutURLProtocol : NSURLProtocol

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;

- (void)startLoading;
- (void)stopLoading;

@end
