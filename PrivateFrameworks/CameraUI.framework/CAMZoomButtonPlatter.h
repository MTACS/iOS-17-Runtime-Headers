
@interface CAMZoomButtonPlatter : UIView {
    NSMutableArray * __allButtons;
    unsigned long long  __focalLengthFlashID;
    UIImageView * __platterBackgroundView;
    long long  _buttonAccessoryState;
    bool  _collapsed;
    long long  _orientation;
    long long  _preferredCustomLens;
    double  _zoomFactor;
    NSArray * _zoomFactors;
    NSArray * _zoomPoints;
}

@property (nonatomic, readonly) NSMutableArray *_allButtons;
@property (setter=_setFocalLengthFlashID:, nonatomic) unsigned long long _focalLengthFlashID;
@property (nonatomic, readonly) UIImageView *_platterBackgroundView;
@property (nonatomic) long long buttonAccessoryState;
@property (nonatomic, readonly) unsigned long long buttonCount;
@property (nonatomic, readonly) NSArray *buttons;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic) long long orientation;
@property (nonatomic) long long preferredCustomLens;
@property (nonatomic) double zoomFactor;
@property (nonatomic, readonly) CAMZoomButton *zoomFactorButton;
@property (nonatomic, readonly) NSArray *zoomFactors;
@property (nonatomic, copy) NSArray *zoomPoints;

- (void).cxx_destruct;
- (id)_allButtons;
- (void)_cancelFocalLengthFlash;
- (id)_createPlatterImageForContentSize:(id)arg1;
- (id)_createZoomButton;
- (void)_flashFocalLengthIfNeeded;
- (unsigned long long)_focalLengthFlashID;
- (id)_indexesForChanges:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicContentSizeForButtonCount:(unsigned long long)arg1;
- (id)_platterBackgroundView;
- (void)_setFocalLengthFlashID:(unsigned long long)arg1;
- (void)_updateBackgroundAnimated:(bool)arg1;
- (void)_updateButtonAccessoryAnimated:(bool)arg1;
- (void)_updateButtonsAnimated:(bool)arg1;
- (void)_updateForContentSize;
- (double)_zoomFactorForButton:(id)arg1 zoomPoint:(id)arg2 isZoomFactorButton:(bool)arg3;
- (id)baseZoomPointForButton:(id)arg1;
- (long long)buttonAccessoryState;
- (unsigned long long)buttonCount;
- (id)buttons;
- (double)defaultZoomFactorForButton:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (void)layoutSubviews;
- (id)nearestZoomButtonForTouch:(id)arg1;
- (long long)orientation;
- (long long)preferredCustomLens;
- (void)setButtonAccessoryState:(long long)arg1;
- (void)setButtonAccessoryState:(long long)arg1 animated:(bool)arg2;
- (void)setCollapsed:(bool)arg1;
- (void)setCollapsed:(bool)arg1 animated:(bool)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setPreferredCustomLens:(long long)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomFactor:(double)arg1 allowFlashingSubstate:(bool)arg2 animated:(bool)arg3;
- (void)setZoomPoints:(id)arg1;
- (void)setZoomPoints:(id)arg1 animated:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (double)zoomFactor;
- (id)zoomFactorButton;
- (id)zoomFactors;
- (id)zoomPoints;

@end
