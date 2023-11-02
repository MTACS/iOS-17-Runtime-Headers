
@protocol MURatingPercentageViewModel <NSObject>

@required

- (NSString *)categoryTitle;
- (unsigned long long)displayPercentage;
- (bool)hasPercentage;
- (bool)hasSubtitle;
- (double)maxScore;
- (unsigned long long)numberOfRatingsUsedForScore;
- (double)score;

@end
