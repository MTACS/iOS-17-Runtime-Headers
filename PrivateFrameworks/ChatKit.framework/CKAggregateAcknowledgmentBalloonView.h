
@interface CKAggregateAcknowledgmentBalloonView : CKAcknowledgmentBalloonView {
    UIImageView * _backgroundView;
    BOOL  _gradientColor;
    UIView<CKGradientReferenceView> * _gradientReferenceView;
    CKGradientView * _gradientView;
    bool  _invertTailDirection;
    BOOL  _solidColor;
    UIImageView * _solidPartsView;
}

@property (nonatomic) BOOL gradientColor;
@property (nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic) bool invertTailDirection;
@property (nonatomic) BOOL solidColor;

+ (id)_middleBubbleInvertedTailSquareImageWithTraitCollection:(id)arg1;
+ (id)_middleBubbleSquareImageWithTraitCollection:(id)arg1;
+ (id)_topBubbleInvertedTailSquareImageWithTraitCollection:(id)arg1;
+ (id)_topBubbleSquareImageWithTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)configureForAggregateAcknowledgmentChatItem:(id)arg1;
- (BOOL)gradientColor;
- (id)gradientReferenceView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)invertTailDirection;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setGradientColor:(BOOL)arg1;
- (void)setGradientReferenceView:(id)arg1;
- (void)setInvertTailDirection:(bool)arg1;
- (void)setSolidColor:(BOOL)arg1;
- (BOOL)solidColor;
- (void)traitCollectionDidChange:(id)arg1;

@end
