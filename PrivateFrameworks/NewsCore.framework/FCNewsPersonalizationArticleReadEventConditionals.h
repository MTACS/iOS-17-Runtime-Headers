
@interface FCNewsPersonalizationArticleReadEventConditionals : NSObject {
    double  _minimumDuration;
    long long  _minimumScrollEventCount;
}

@property (nonatomic) double minimumDuration;
@property (nonatomic) long long minimumScrollEventCount;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (double)minimumDuration;
- (long long)minimumScrollEventCount;
- (void)setMinimumDuration:(double)arg1;
- (void)setMinimumScrollEventCount:(long long)arg1;

@end
