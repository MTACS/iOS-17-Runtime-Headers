
@interface UISlidingBarStateRequest : NSObject <NSCopying> {
    double  _leadingOffscreenWidth;
    double  _leadingWidth;
    double  _mainWidth;
    double  _rubberBandInset;
    double  _supplementaryOffscreenWidth;
    double  _supplementaryWidth;
    double  _trailingOffscreenWidth;
    double  _trailingWidth;
    bool  _userInitiated;
}

@property (nonatomic) double leadingOffscreenWidth;
@property (nonatomic) double leadingWidth;
@property (nonatomic) double mainWidth;
@property (nonatomic) double rubberBandInset;
@property (nonatomic) double supplementaryOffscreenWidth;
@property (nonatomic) double supplementaryWidth;
@property (nonatomic) double trailingOffscreenWidth;
@property (nonatomic) double trailingWidth;
@property (nonatomic) bool userInitiated;

- (id)_closestEqualOrLargerState:(id)arg1;
- (id)_closestEqualOrLargerState:(id)arg1 returningDistance:(double*)arg2;
- (id)_closestState:(id)arg1;
- (id)_closestState:(id)arg1 returningDistance:(double*)arg2;
- (id)_matchingState:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)leadingOffscreenWidth;
- (double)leadingWidth;
- (double)mainWidth;
- (double)rubberBandInset;
- (void)setLeadingOffscreenWidth:(double)arg1;
- (void)setLeadingWidth:(double)arg1;
- (void)setMainWidth:(double)arg1;
- (void)setRubberBandInset:(double)arg1;
- (void)setSupplementaryOffscreenWidth:(double)arg1;
- (void)setSupplementaryWidth:(double)arg1;
- (void)setTrailingOffscreenWidth:(double)arg1;
- (void)setTrailingWidth:(double)arg1;
- (void)setUserInitiated:(bool)arg1;
- (double)supplementaryOffscreenWidth;
- (double)supplementaryWidth;
- (double)trailingOffscreenWidth;
- (double)trailingWidth;
- (bool)userInitiated;

@end
