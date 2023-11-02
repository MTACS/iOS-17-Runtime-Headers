
@interface AVTGroupDialCell : UICollectionViewCell {
    UILabel * _label;
    NSTimer * _shimmerTimer;
    NSString * _string;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, retain) NSTimer *shimmerTimer;
@property (nonatomic, copy) NSString *string;

+ (id)boldLabelFont;
+ (id)cellIdentifier;
+ (id)labelFont;

- (void).cxx_destruct;
- (void)cancelShimmerTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)prepareForReuse;
- (void)setActiveItem:(bool)arg1 animated:(bool)arg2;
- (void)setShimmerTimer:(id)arg1;
- (void)setString:(id)arg1;
- (void)shimmerOnceWithCompletion:(id /* block */)arg1;
- (id)shimmerTimer;
- (void)startShimmering;
- (void)stopShimmeringAnimated:(bool)arg1;
- (id)string;

@end
