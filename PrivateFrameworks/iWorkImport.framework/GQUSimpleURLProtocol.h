
@interface GQUSimpleURLProtocol : NSURLProtocol

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (void)setResourcesDictionary:(id)arg1;

- (void)startLoading;
- (void)stopLoading;

@end
