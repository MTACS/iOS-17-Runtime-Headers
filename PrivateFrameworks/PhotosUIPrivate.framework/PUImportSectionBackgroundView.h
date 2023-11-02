
@interface PUImportSectionBackgroundView : UICollectionReusableView {
    UIColor * _bottomStrokeColor;
    UIView * _bottomStrokeView;
    bool  _needsBottomStrokeViewUpdate;
    double  _strokeWidth;
}

@property (nonatomic, retain) UIColor *bottomStrokeColor;
@property (nonatomic, retain) UIView *bottomStrokeView;
@property (nonatomic) bool needsBottomStrokeViewUpdate;
@property (nonatomic) double strokeWidth;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)bottomStrokeColor;
- (id)bottomStrokeView;
- (void)layoutSubviews;
- (bool)needsBottomStrokeViewUpdate;
- (bool)needsStroke;
- (void)setBottomStrokeColor:(id)arg1;
- (void)setBottomStrokeView:(id)arg1;
- (void)setNeedsBottomStrokeViewUpdate;
- (void)setNeedsBottomStrokeViewUpdate:(bool)arg1;
- (void)setStrokeWidth:(double)arg1;
- (double)strokeWidth;
- (void)updateBottomStrokeViewIfNeeded;

@end
