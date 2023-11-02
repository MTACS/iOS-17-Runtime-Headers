
@interface HUGridCameraCell : HUGridCell {
    NSArray * _allConstraints;
    HUCameraView * _cameraView;
    HULegibilityLabel * _descriptionLabel;
    NADecayingTimer * _descriptionLabelUpdateTimer;
    UIImage * _exclamationImage;
    UIImageView * _exclamationImageView;
    HUVisualEffectContainerView * _exclamationView;
    HFItem * _item;
    NSArray * _labelsConstraints;
    HUGridCameraCellLayoutOptions * _layoutOptions;
    _UILegibilitySettings * _legibilitySettings;
    UIImageView * _recordingIndicatorImageView;
    UILabel * _titleLabel;
    UIView * _topBarView;
}

@property (nonatomic, retain) NSArray *allConstraints;
@property (nonatomic, readonly) UIView *cameraContentView;
@property (nonatomic, retain) HUCameraView *cameraView;
@property (nonatomic) double cameraViewAlpha;
@property (nonatomic, retain) HULegibilityLabel *descriptionLabel;
@property (nonatomic, retain) NADecayingTimer *descriptionLabelUpdateTimer;
@property (nonatomic, readonly) UIImage *exclamationImage;
@property (nonatomic, readonly) UIImageView *exclamationImageView;
@property (nonatomic, readonly) HUVisualEffectContainerView *exclamationView;
@property (nonatomic, retain) NSArray *labelsConstraints;
@property (nonatomic, retain) HUGridCameraCellLayoutOptions *layoutOptions;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) UIImageView *recordingIndicatorImageView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIView *topBarView;

+ (Class)layoutOptionsClass;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_animateTransitionWithView:(id)arg1 animations:(id /* block */)arg2;
- (id)_descriptionLabelText:(id)arg1;
- (void)_handleShouldDifferentiateWithoutColorDidChange;
- (void)_populateExclamationImageIfNeeded;
- (void)_updateCameraViewAppearance;
- (void)_updateRecordIndicatorColor;
- (id)allConstraints;
- (id)cameraContentView;
- (id)cameraView;
- (double)cameraViewAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cameraViewFrame;
- (void)dealloc;
- (id)descriptionLabel;
- (id)descriptionLabelUpdateTimer;
- (id)exclamationImage;
- (id)exclamationImageView;
- (id)exclamationView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)labelsConstraints;
- (id)layoutOptions;
- (void)layoutOptionsDidChange;
- (id)legibilitySettings;
- (void)prepareForReuse;
- (id)recordingIndicatorImageView;
- (void)setAllConstraints:(id)arg1;
- (void)setCameraView:(id)arg1;
- (void)setCameraViewAlpha:(double)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionLabelUpdateTimer:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLabelsConstraints:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setRecordingIndicatorImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopBarView:(id)arg1;
- (bool)shouldDisplayAccessModeErrorContent;
- (bool)shouldDisplayErrorContent;
- (id)titleLabel;
- (id)topBarView;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
