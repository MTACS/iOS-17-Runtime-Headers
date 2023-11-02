
@interface PSIPostProcessor : NSObject

+ (bool)_prefer:(id)arg1 over:(id)arg2;
+ (void)postProcessGroupResults:(id)arg1 dedupedGroupResults:(out id*)arg2 query:(id)arg3;

@end
