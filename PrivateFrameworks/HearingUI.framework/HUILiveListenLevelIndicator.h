
@interface HUILiveListenLevelIndicator : UIView {
    NSArray * _levelIndicators;
}

@property (nonatomic, retain) NSArray *levelIndicators;

+ (double)controlWidth;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)levelIndicators;
- (void)setLevelIndicators:(id)arg1;
- (void)updateLevel:(double)arg1;

@end
