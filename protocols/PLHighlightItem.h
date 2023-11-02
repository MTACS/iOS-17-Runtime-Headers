
@protocol PLHighlightItem <NSObject>

@required

- (NSDate *)endDate;
- (bool)isRecent;
- (unsigned long long)numberOfAssetsInExtendedForSharingConsideration:(long long)arg1;
- (double)promotionScore;
- (NSDate *)startDate;
- (unsigned short)type;
- (NSString *)uuid;

@end
