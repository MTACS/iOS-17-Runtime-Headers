
@interface NewsArticles.ToolbarIssueCoverButton : UIButton {
    void callToActionLabel;
    void coverDateLabel;
    void coverView;
    void highlightColor;
    void highlightView;
}

@property (nonatomic) bool highlighted;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;

@end
