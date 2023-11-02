
@interface HUMosaicCameraCell : HUGridCell {
    NSArray * _allConstraints;
    HULegibilityLabel * _cameraNameLabel;
    HUCameraView * _cameraView;
    double  _currentCornerRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentSize;
    bool  _isSingleCell;
    HFItem * _item;
    HUGridCellLayoutOptions * _layoutOptions;
    NSArray * _legibilityLabelConstraints;
    UIImageView * _recordingIndicatorImageView;
    HULegibilityLabel * _timingLabel;
    NADecayingTimer * _timingLabelUpdateTimer;
}

@property (nonatomic, retain) NSArray *allConstraints;
@property (nonatomic, readonly) UIView *cameraContentView;
@property (nonatomic, retain) HULegibilityLabel *cameraNameLabel;
@property (nonatomic, retain) HUCameraView *cameraView;
@property (nonatomic) double cameraViewAlpha;
@property (nonatomic) double currentCornerRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } currentSize;
@property (nonatomic) bool isSingleCell;
@property (nonatomic, retain) NSArray *legibilityLabelConstraints;
@property (nonatomic, retain) UIImageView *recordingIndicatorImageView;
@property (nonatomic, retain) HULegibilityLabel *timingLabel;
@property (nonatomic, retain) NADecayingTimer *timingLabelUpdateTimer;

+ (Class)layoutOptionsClass;
+ (id)legibilityLabel;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_animateTransitionWithView:(id)arg1 animations:(id /* block */)arg2;
- (void)_handleShouldDifferentiateWithoutColorDidChange;
- (void)_setupCommonCellAppearance;
- (id)_timingLabelText:(id)arg1;
- (void)_updateCornerRadiusIfNeeded;
- (void)_updateRecordIndicatorColor;
- (void)_updateUIForSizeChange;
- (void)_updateViewCorners:(double)arg1;
- (id)allConstraints;
- (id)cameraContentView;
- (id)cameraNameLabel;
- (id)cameraView;
- (double)cameraViewAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cameraViewFrame;
- (void)createLegibilityLabelsIfNecessary;
- (double)currentCornerRadius;
- (struct CGSize { double x1; double x2; })currentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSingleCell;
- (id)item;
- (id)layoutOptions;
- (void)layoutOptionsDidChange;
- (void)layoutSubviews;
- (id)legibilityLabelConstraints;
- (void)prepareForReuse;
- (id)recordingIndicatorImageView;
- (void)setAllConstraints:(id)arg1;
- (void)setCameraNameLabel:(id)arg1;
- (void)setCameraView:(id)arg1;
- (void)setCameraViewAlpha:(double)arg1;
- (void)setCurrentCornerRadius:(double)arg1;
- (void)setCurrentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsSingleCell:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setLegibilityLabelConstraints:(id)arg1;
- (void)setRecordingIndicatorImageView:(id)arg1;
- (void)setTimingLabel:(id)arg1;
- (void)setTimingLabelUpdateTimer:(id)arg1;
- (bool)shouldDisplayAccessModeErrorContent;
- (bool)shouldDisplayErrorContent;
- (id)timingLabel;
- (id)timingLabelUpdateTimer;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
