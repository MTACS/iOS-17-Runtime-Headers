
@protocol PXProtoFeature <NSObject>

@required

- (long long)featureGroupIndex;
- (long long)featureKind;

@optional

- (NSString *)featureLocalizedTitle;
- (NSArray *)featurePeople;
- (double)featureScore;
- (UIColor *)featureSelectedTintColor;
- (UIColor *)featureTintColor;

@end
