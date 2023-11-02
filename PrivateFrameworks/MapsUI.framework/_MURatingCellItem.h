
@interface _MURatingCellItem : NSObject {
    double  _preferredWidth;
    UIView * _ratingView;
    bool  _shouldApplyWidthConstraint;
}

@property (nonatomic) double preferredWidth;
@property (nonatomic, retain) UIView *ratingView;
@property (nonatomic) bool shouldApplyWidthConstraint;

- (void).cxx_destruct;
- (double)preferredWidth;
- (id)ratingView;
- (void)setPreferredWidth:(double)arg1;
- (void)setRatingView:(id)arg1;
- (void)setShouldApplyWidthConstraint:(bool)arg1;
- (bool)shouldApplyWidthConstraint;

@end
