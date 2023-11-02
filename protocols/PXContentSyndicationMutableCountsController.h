
@protocol PXContentSyndicationMutableCountsController <NSObject>

@required

- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })detailedCounts;
- (long long)savedCount;
- (void)setDetailedCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setSavedCount:(long long)arg1;

@end
