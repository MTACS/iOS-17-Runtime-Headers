
@interface NewsFeed.CoverViewActionButton : UIButton {
    void onMenuPresentation;
    void onTap;
    void tintColorForNormalState;
    void touchInsets;
}

@property (nonatomic) bool highlighted;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHighlighted:(bool)arg1;

@end
