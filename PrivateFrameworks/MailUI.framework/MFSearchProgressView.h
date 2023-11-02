
@interface MFSearchProgressView : UIView {
    bool  _animating;
    NSArray * _characterLabels;
    UIStackView * _stackView;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, retain) NSArray *characterLabels;
@property (nonatomic, retain) UIStackView *stackView;

+ (id)log;

- (void).cxx_destruct;
- (void)_endCharacterAnimation;
- (id)_newProgressLabelWithText:(id)arg1;
- (id)_searchingFont;
- (void)_setupLabels;
- (void)_startCharacterAnimation;
- (id)characterLabels;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateLayout;
- (bool)isAnimating;
- (void)setAnimating:(bool)arg1;
- (void)setAnimating:(bool)arg1 fade:(bool)arg2;
- (void)setCharacterLabels:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;

@end
