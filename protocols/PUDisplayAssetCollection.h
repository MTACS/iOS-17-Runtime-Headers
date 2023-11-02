
@protocol PUDisplayAssetCollection <NSObject, NSCopying>

@required

- (NSDate *)endDate;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;
- (NSDate *)startDate;

@end
