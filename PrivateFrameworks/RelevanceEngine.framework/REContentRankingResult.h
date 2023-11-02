
@interface REContentRankingResult : NSObject {
    double  _negativePolarity;
    double  _positivePolarity;
    double  _unbiasedNegativePolarity;
    double  _unbiasedPositivePolarity;
    int  _unknownCount;
    bool  _valid;
}

@property (nonatomic) double negativePolarity;
@property (nonatomic) double positivePolarity;
@property (nonatomic) double unbiasedNegativePolarity;
@property (nonatomic) double unbiasedPositivePolarity;
@property (nonatomic) int unknownCount;
@property (nonatomic) bool valid;

- (double)negativePolarity;
- (double)positivePolarity;
- (void)setNegativePolarity:(double)arg1;
- (void)setPositivePolarity:(double)arg1;
- (void)setUnbiasedNegativePolarity:(double)arg1;
- (void)setUnbiasedPositivePolarity:(double)arg1;
- (void)setUnknownCount:(int)arg1;
- (void)setValid:(bool)arg1;
- (double)unbiasedNegativePolarity;
- (double)unbiasedPositivePolarity;
- (int)unknownCount;
- (bool)valid;

@end
