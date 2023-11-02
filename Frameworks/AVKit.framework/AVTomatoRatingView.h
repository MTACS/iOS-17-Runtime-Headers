
@interface AVTomatoRatingView : UIView {
    UIColor * _textColor;
    unsigned long long  _tomatoFreshness;
    float  _tomatoRating;
    UIImageView * _tomatoRatingIcon;
    UILabel * _tomatoRatingLabel;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) unsigned long long tomatoFreshness;
@property (nonatomic) float tomatoRating;

- (void).cxx_destruct;
- (id)font;
- (id)init;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTomatoFreshness:(unsigned long long)arg1;
- (void)setTomatoRating:(float)arg1;
- (id)textColor;
- (unsigned long long)tomatoFreshness;
- (float)tomatoRating;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForLastBaselineLayout;

@end
