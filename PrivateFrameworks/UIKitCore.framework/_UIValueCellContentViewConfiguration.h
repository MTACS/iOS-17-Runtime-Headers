
@interface _UIValueCellContentViewConfiguration : NSObject <NSSecureCoding, _UIContentViewConfiguration> {
    unsigned long long  _axesPreservingSuperviewLayoutMargins;
    struct { 
        unsigned int hasCustomizedAxesPreservingSuperviewLayoutMargins : 1; 
        unsigned int hasCustomizedDirectionalLayoutMargins : 1; 
        unsigned int hasCustomizedImageToTextPadding : 1; 
        unsigned int hasCustomizedTextToValuePadding : 1; 
    }  _configurationFlags;
    long long  _defaultStyle;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _directionalLayoutMargins;
    double  _imageToTextPadding;
    _UIContentViewImageViewConfiguration * _imageView;
    _UIContentViewLabelConfiguration * _textLabel;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _textToValuePadding;
    _UIContentViewLabelConfiguration * _valueLabel;
}

@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } directionalLayoutMargins;
@property (readonly) unsigned long long hash;
@property (nonatomic) double imageToTextPadding;
@property (nonatomic, readonly) _UIContentViewImageViewConfiguration *imageView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _UIContentViewLabelConfiguration *textLabel;
@property (nonatomic) struct UIOffset { double x1; double x2; } textToValuePadding;
@property (nonatomic, readonly) _UIContentViewLabelConfiguration *valueLabel;

+ (id)defaultConfiguration;
+ (id)defaultListCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1;
+ (id)listCellConfiguration;
+ (id)outlineCellConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToContentView:(id)arg1;
- (unsigned long long)axesPreservingSuperviewLayoutMargins;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createContentView;
- (id)description;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalLayoutMargins;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)imageToTextPadding;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImageToTextPadding:(double)arg1;
- (void)setTextToValuePadding:(struct UIOffset { double x1; double x2; })arg1;
- (id)textLabel;
- (struct UIOffset { double x1; double x2; })textToValuePadding;
- (id)updatedConfigurationForState:(unsigned long long)arg1;
- (id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2;
- (id)valueLabel;

@end
