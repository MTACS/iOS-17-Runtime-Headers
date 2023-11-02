
@interface PGCurationContentOrAestheticScoreTrait : PGCurationTrait {
    double  _minimumAestheticScore;
}

@property (nonatomic) double minimumAestheticScore;

- (id)initWithMinimumContentScore:(double)arg1 minimumAestheticScore:(double)arg2;
- (bool)isActive;
- (double)minimumAestheticScore;
- (void)setMinimumAestheticScore:(double)arg1;

@end
