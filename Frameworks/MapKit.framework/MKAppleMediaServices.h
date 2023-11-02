
@interface MKAppleMediaServices : NSObject

+ (id)sharedInstance;
+ (id)sourceStringWithSource:(long long)arg1;

- (long long)AMSMediaTaskTypeFromGEOAppleMediaServicesMediaType:(long long)arg1;
- (id)additionalParameterWithType:(long long)arg1;
- (void)appleMediaServicesResultsWithBundleIdentifiers:(id)arg1 artworkSize:(struct CGSize { double x1; double x2; })arg2 screenScale:(double)arg3 source:(long long)arg4 completion:(id /* block */)arg5;
- (void)appleMediaServicesResultsWithBundleIdentifiers:(id)arg1 source:(long long)arg2 completion:(id /* block */)arg3;
- (void)appleMediaServicesResultsWithIdentifiers:(id)arg1 artworkSize:(struct CGSize { double x1; double x2; })arg2 screenScale:(double)arg3 type:(long long)arg4 source:(long long)arg5 completion:(id /* block */)arg6;
- (void)appleMediaServicesResultsWithIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 artworkSize:(struct CGSize { double x1; double x2; })arg3 screenScale:(double)arg4 type:(long long)arg5 source:(long long)arg6 completion:(id /* block */)arg7;
- (void)appleMediaServicesResultsWithIdentifiers:(id)arg1 source:(long long)arg2 completion:(id /* block */)arg3;
- (id)externalRequestCounterRequestSubtypeWithType:(long long)arg1;
- (id)externalRequestCounterRequestType;
- (void)mediaResultWithIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 artworkSize:(struct CGSize { double x1; double x2; })arg3 screenScale:(double)arg4 type:(long long)arg5 source:(long long)arg6 completion:(id /* block */)arg7;

@end
