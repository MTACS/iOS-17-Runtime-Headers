
@interface MPHomeSharingURLProtocol : NSURLProtocol

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;

- (void)startLoading;
- (void)stopLoading;

@end
