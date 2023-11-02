
@interface ADClient : NSObject

+ (id)sharedClient;

- (void)addClientToSegments:(id)arg1 replaceExisting:(bool)arg2;
- (void)determineAppInstallationAttributionWithCompletionHandler:(id /* block */)arg1;
- (void)lookupAdConversionDetails:(id /* block */)arg1;
- (void)requestAttributionDetailsWithBlock:(id /* block */)arg1;
- (void)segmentDataForSignedInUserWithBlock:(id /* block */)arg1;

@end
