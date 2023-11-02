
@protocol REMLFeatureProvider <NSObject>

@required

- (NSSet *)allFeatures;
- (REFeatureValue *)valueForFeature:(REFeature *)arg1;

@end
