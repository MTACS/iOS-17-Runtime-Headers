
@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell <UIPointerInteractionDelegate> {
    PUPhotoEditAdjustmentControl * _containerButton;
    bool  _enabled;
    bool  _imageIsColor;
    NSString * _imageName;
    bool  _isUserModifying;
}

@property (nonatomic, retain) PUPhotoEditAdjustmentControl *containerButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultValue;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) double identityValue;
@property (nonatomic) bool imageIsColor;
@property (nonatomic, retain) NSString *imageName;
@property (nonatomic) bool isUserModifying;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (readonly) Class superclass;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (void)_setupContainerButton;
- (id)containerButton;
- (double)defaultValue;
- (id)focusEffect;
- (double)identityValue;
- (bool)imageIsColor;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isUserModifying;
- (void)layoutSubviews;
- (double)maxValue;
- (double)minValue;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;
- (void)resetToDefault;
- (void)setContainerButton:(id)arg1;
- (void)setDefaultValue:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentityValue:(double)arg1;
- (void)setImageIsColor:(bool)arg1;
- (void)setImageName:(id)arg1;
- (void)setIsUserModifying:(bool)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
