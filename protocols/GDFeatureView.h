
@protocol GDFeatureView

@required

- (NSArray *)expectedFeatureKeysWithError:(id*)arg1;
- (NSArray *)featureForKey:(GDFeatureKey *)arg1 error:(id*)arg2;
- (NSArray *)featureKeysWithError:(id*)arg1;

@end
