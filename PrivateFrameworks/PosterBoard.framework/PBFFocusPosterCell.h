
@interface PBFFocusPosterCell : UICollectionViewCell {
    long long  _actionType;
    bool  _checkboxOn;
    PBFFocusCheckboxView * _checkboxView;
    NSString * _focusSymbolImageName;
    UIImageView * _focusSymbolView;
    long long  _layoutOrientation;
    UIImage * _posterImage;
    <PBFPosterPreview> * _posterPreview;
    PBFPosterGalleryPreviewComplicationContentView * _posterPreviewComplicationContentView;
    <PBFPosterPreviewGenerator> * _posterPreviewGenerator;
    UIImageView * _posterView;
    NSLayoutConstraint * _posterViewHeightConstraint;
    UIView * _shadowView;
}

@property (nonatomic) long long actionType;
@property (getter=isCheckboxOn, nonatomic) bool checkboxOn;
@property (nonatomic, copy) NSString *focusSymbolImageName;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic, retain) UIImage *posterImage;
@property (nonatomic, retain) <PBFPosterPreview> *posterPreview;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } posterPreviewFrame;
@property (nonatomic) <PBFPosterPreviewGenerator> *posterPreviewGenerator;
@property (nonatomic, readonly) UIImageView *posterView;

+ (double)cornerRadius;
+ (struct CGSize { double x1; double x2; })estimatedCellSizeForItemWidth:(double)arg1 screen:(id)arg2 hasAccessory:(bool)arg3;

- (void).cxx_destruct;
- (long long)actionType;
- (void)createCheckboxViewIfNecessary;
- (void)createConstraints;
- (void)createFocusSymbolViewIfNecessary;
- (void)createPosterView;
- (void)createPreviewComplicationContentView;
- (void)createShadowView;
- (id)focusSymbolImageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCheckboxOn;
- (long long)layoutOrientation;
- (id)makeComplicationsPortalView;
- (id)posterImage;
- (id)posterPreview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })posterPreviewFrame;
- (id)posterPreviewGenerator;
- (id)posterView;
- (void)setActionType:(long long)arg1;
- (void)setCheckboxAssociatedPosterIdentifier:(id)arg1;
- (void)setCheckboxOn:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFocusSymbolImageName:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setPosterPreview:(id)arg1;
- (void)setPosterPreviewGenerator:(id)arg1;

@end
