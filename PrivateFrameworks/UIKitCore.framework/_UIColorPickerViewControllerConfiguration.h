
@interface _UIColorPickerViewControllerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  __allowsNoColor;
    bool  __isEmbedded;
    bool  __isInPopoverPresentation;
    double  __preferredWidth;
    bool  __shouldUseDarkGridInDarkMode;
    bool  __showsEyedropper;
    bool  __showsGridOnly;
    NSArray * __suggestedColors;
    bool  __useLandscapeLayout;
    long long  __userInterfaceStyleForGrid;
    bool  _showsAlpha;
    NSString * _title;
}

@property (nonatomic) bool _allowsNoColor;
@property (nonatomic) bool _isEmbedded;
@property (nonatomic) bool _isInPopoverPresentation;
@property (nonatomic) double _preferredWidth;
@property (nonatomic) bool _shouldUseDarkGridInDarkMode;
@property (nonatomic) bool _showsEyedropper;
@property (nonatomic) bool _showsGridOnly;
@property (nonatomic, copy) NSArray *_suggestedColors;
@property (nonatomic) bool _useLandscapeLayout;
@property (nonatomic) long long _userInterfaceStyleForGrid;
@property (nonatomic) bool showsAlpha;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_allowsNoColor;
- (bool)_isEmbedded;
- (bool)_isInPopoverPresentation;
- (double)_preferredWidth;
- (bool)_shouldUseDarkGridInDarkMode;
- (bool)_showsEyedropper;
- (bool)_showsGridOnly;
- (id)_suggestedColors;
- (bool)_useLandscapeLayout;
- (long long)_userInterfaceStyleForGrid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setShowsAlpha:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)set_allowsNoColor:(bool)arg1;
- (void)set_isEmbedded:(bool)arg1;
- (void)set_isInPopoverPresentation:(bool)arg1;
- (void)set_preferredWidth:(double)arg1;
- (void)set_shouldUseDarkGridInDarkMode:(bool)arg1;
- (void)set_showsEyedropper:(bool)arg1;
- (void)set_showsGridOnly:(bool)arg1;
- (void)set_suggestedColors:(id)arg1;
- (void)set_useLandscapeLayout:(bool)arg1;
- (void)set_userInterfaceStyleForGrid:(long long)arg1;
- (bool)showsAlpha;
- (id)title;

@end
