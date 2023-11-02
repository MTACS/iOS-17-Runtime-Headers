
@protocol PXDisplaySuggestion <NSObject, NSCopying>

@required

- (NSDictionary *)actionProperties;
- (NSDate *)endDate;
- (<PXDisplayAssetFetchResult> *)fetchKeyAssets;
- (NSString *)localIdentifier;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;
- (NSDate *)startDate;
- (unsigned short)state;
- (unsigned short)subtype;
- (NSString *)title;
- (unsigned short)type;

@end
