
@interface SUUIAppleIDImageURLProtocol : NSURLProtocol

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;

- (void)_startLoading;
- (void)startLoading;
- (void)stopLoading;

@end
