
@interface TLKStarsView : TLKStackView {
    double  _currentStarRating;
    UIFont * _font;
    double  _starRating;
    bool  _useCompactMode;
}

@property (nonatomic) double currentStarRating;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) double starRating;
@property (nonatomic) bool useCompactMode;

- (void).cxx_destruct;
- (double)currentStarRating;
- (id)font;
- (id)init;
- (void)setCurrentStarRating:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setStarRating:(double)arg1;
- (void)setUseCompactMode:(bool)arg1;
- (double)starRating;
- (void)updateStarImages;
- (bool)useCompactMode;

@end
