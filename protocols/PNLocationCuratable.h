
@protocol PNLocationCuratable <NSObject>

@required

+ (unsigned long long)fetchLimit;
+ (NSArray *)representativeAssetsForMapDisplayFromAssets:(PHFetchResult *)arg1;
+ (NSArray *)requiredFetchPropertySets;

@end
