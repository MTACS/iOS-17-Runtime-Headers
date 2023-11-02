
@interface PGCurationCropScoreTrait : PGCurationTrait {
    double  _minimumSquareCropScore;
}

@property (nonatomic) double minimumSquareCropScore;

- (id)initWithMinimumSquareCropScore:(double)arg1;
- (bool)isActive;
- (double)minimumSquareCropScore;
- (void)setMinimumSquareCropScore:(double)arg1;

@end
