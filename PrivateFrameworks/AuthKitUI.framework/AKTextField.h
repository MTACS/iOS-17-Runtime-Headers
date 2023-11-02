
@interface AKTextField : UIView {
    UIImageView * _backgroundImageView;
    long long  _blurEffectStyle;
    NSMutableArray * _constraints;
    UIColor * _entryDescriptionTextColor;
    UITextField * _entryField;
    UIColor * _entryFieldTextColor;
    UIColor * _fieldBackgroundColor;
    long long  _rowIdentifier;
    bool  _usesVibrancy;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic) long long blurEffectStyle;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIColor *entryDescriptionTextColor;
@property (nonatomic, readonly) UITextField *entryField;
@property (nonatomic, retain) UIColor *entryFieldTextColor;
@property (nonatomic, retain) UIColor *fieldBackgroundColor;
@property (nonatomic) long long rowIdentifier;
@property (nonatomic) bool usesVibrancy;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_drawBackgroundForPathRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 pathSegments:(int)arg4;
- (id)_fieldTextColor;
- (id)_setupBackgroundViewConstriants;
- (void)_setupInlineEntryStyleViews;
- (void)_setupLabelAndFieldStyles;
- (void)_updateFonts:(id)arg1;
- (id)backgroundImage;
- (id)backgroundImageView;
- (long long)blurEffectStyle;
- (id)cachedImageUsingBlock:(id /* block */)arg1;
- (id)constraints;
- (void)dealloc;
- (void)drawFillForPathRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3;
- (void)drawStrokeForPathRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 pathSegments:(int)arg4;
- (id)entryDescriptionTextColor;
- (id)entryField;
- (id)entryFieldTextColor;
- (id)fieldBackgroundColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (long long)rowIdentifier;
- (void)setBackgroundImageView:(id)arg1;
- (void)setBlurEffectStyle:(long long)arg1;
- (void)setConstraints:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEntryDescriptionTextColor:(id)arg1;
- (void)setEntryFieldTextColor:(id)arg1;
- (void)setFieldBackgroundColor:(id)arg1;
- (void)setRowIdentifier:(long long)arg1;
- (void)setUsesVibrancy:(bool)arg1;
- (void)setVisualEffectView:(id)arg1;
- (bool)usesVibrancy;
- (id)visualEffectView;

@end
