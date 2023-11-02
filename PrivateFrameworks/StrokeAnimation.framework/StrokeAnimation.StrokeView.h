
@interface StrokeAnimation.StrokeView : UIView <SAStrokeVisualResponse> {
    void animationDelegate;
    void animationLayers;
    void animationView;
    void backgroundImageUrl;
    void backgroundImageView;
    void backgroundLayer;
    void backgroundView;
    void colorForbackgroundView;
    void contourColor;
    void isAnimating;
    void pronunciationLabel;
    void queue;
    void strokeContourLayer;
    void strokeData;
    void strokePathInfos;
    void timers;
}

@property (nonatomic, retain) <SAStrokeAnimatingDelegate> *interactionDelegate;

- (void).cxx_destruct;
- (void)_didTapView:(id)arg1;
- (void)endAnimation;
- (id)initWith:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)interactionDelegate;
- (void)layoutSubviews;
- (void)setInteractionDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimationRepeating:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithData:(id)arg1;

@end
