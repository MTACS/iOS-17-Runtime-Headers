
@interface AVTStickerRecentsButtonCollectionViewCell : AVTStickerRecentsStickerCollectionViewCell {
    CAShapeLayer * _circularBackgroundLayer;
}

@property (nonatomic, retain) CAShapeLayer *circularBackgroundLayer;

+ (id)identifier;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })circleLayerRect;
- (id)circularBackgroundLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCircularBackgroundLayer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithDefaultImage;
- (void)updateWithImage:(id)arg1;

@end
