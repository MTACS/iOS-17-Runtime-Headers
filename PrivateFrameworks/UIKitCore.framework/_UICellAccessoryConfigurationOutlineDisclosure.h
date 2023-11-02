
@interface _UICellAccessoryConfigurationOutlineDisclosure : _UICellAccessoryConfiguration {
    UIImage * __customImage;
    bool  _cellSelectionTogglesExpansionState;
    double  _rotationAngle;
    UIColor * _selectedTintColor;
}

@property (nonatomic, readonly) UIImage *_customImage;
@property (nonatomic, readonly) bool cellSelectionTogglesExpansionState;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double rotationAngle;
@property (nonatomic, retain) UIColor *selectedTintColor;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_customImage;
- (id)_identifier;
- (long long)_systemType;
- (bool)cellSelectionTogglesExpansionState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)init;
- (id)initWithCellSelectionTogglesExpansionState:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)rotationAngle;
- (id)selectedTintColor;
- (void)setImage:(id)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setSelectedTintColor:(id)arg1;

@end
