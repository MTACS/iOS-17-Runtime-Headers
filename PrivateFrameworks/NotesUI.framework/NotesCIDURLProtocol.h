
@interface NotesCIDURLProtocol : NSURLProtocol

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)registerDataProvider:(id)arg1 forCIDURL:(id)arg2;
+ (void)unregisterDataProviderForCIDURL:(id)arg1;

- (void)startLoading;
- (void)stopLoading;

@end
