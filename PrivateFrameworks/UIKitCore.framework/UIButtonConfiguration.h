
@interface UIButtonConfiguration : NSObject <NSCopying, NSSecureCoding, _UIButtonConfigurationShim> {
    id /* block */  _activityIndicatorColorTransformer;
    NSAttributedString * _attributedSubtitle;
    NSAttributedString * _attributedTitle;
    UIBackgroundConfiguration * _background;
    UIColor * _baseBackgroundColor;
    UIColor * _baseForegroundColor;
    _UIButtonConfigurationStyleBehaviors * _behaviors;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentInsets;
    long long  _cornerStyle;
    struct { 
        unsigned int macIdiomStyle : 4; 
        unsigned int buttonSize : 2; 
        unsigned int showsActivityIndicator : 1; 
        unsigned int useCustomContentInsets : 1; 
        unsigned int contentInsetsExpansion : 3; 
        unsigned int titleLineBreakMode : 3; 
        unsigned int subtitleLineBreakMode : 3; 
        unsigned int automaticallyUpdateForSelection : 1; 
        unsigned int indicator : 2; 
        unsigned int resolvedTitleIsOversized : 1; 
        unsigned int resolvedSubtitleIsOversized : 1; 
        unsigned int resolvedIndicator : 2; 
        unsigned int titleAlignment : 2; 
        unsigned int alwaysApplyTitleAlignment : 1; 
    }  _flags;
    UIImage * _image;
    id /* block */  _imageColorTransformer;
    double  _imagePadding;
    unsigned long long  _imagePlacement;
    double  _imageReservation;
    id /* block */  _indicatorColorTransformer;
    UIImageSymbolConfiguration * _preferredSymbolConfigurationForImage;
    UIColor * _resolvedActivityIndicatorColor;
    double  _resolvedActivityIndicatorSize;
    UIColor * _resolvedImageColor;
    double  _resolvedImageReservation;
    UIColor * _resolvedIndicatorColor;
    UIImageSymbolConfiguration * _resolvedIndicatorSymbolConfig;
    NSAttributedString * _resolvedSubtitle;
    UIImageSymbolConfiguration * _resolvedSymbolConfig;
    NSAttributedString * _resolvedTitle;
    id /* block */  _subtitleTextAttributesTransformer;
    double  _titlePadding;
    id /* block */  _titleTextAttributesTransformer;
}

@property (setter=_setAlwaysApplyTitleAlignment:, nonatomic) bool _alwaysApplyTitleAlignment;
@property (setter=_dci_setIndicator:, nonatomic) long long _dci_indicator;
@property (setter=_dci_setIndicatorColorTransformer:, nonatomic, copy) id /* block */ _dci_indicatorColorTransformer;
@property (nonatomic, copy) id /* block */ activityIndicatorColorTransformer;
@property (nonatomic, readonly, copy) NSAttributedString *attributedSubtitle;
@property (nonatomic, copy) NSAttributedString *attributedSubtitle;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic) bool automaticallyUpdateForSelection;
@property (nonatomic, readonly) UIBackgroundConfiguration *background;
@property (nonatomic, retain) UIBackgroundConfiguration *background;
@property (nonatomic, retain) UIColor *baseBackgroundColor;
@property (nonatomic, retain) UIColor *baseForegroundColor;
@property (nonatomic, readonly) long long buttonSize;
@property (nonatomic) long long buttonSize;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) long long cornerStyle;
@property (nonatomic) long long cornerStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) id /* block */ imageColorTransformer;
@property (nonatomic, readonly) double imagePadding;
@property (nonatomic) double imagePadding;
@property (nonatomic, readonly) unsigned long long imagePlacement;
@property (nonatomic) unsigned long long imagePlacement;
@property (nonatomic) double imageReservation;
@property (nonatomic) long long indicator;
@property (nonatomic, copy) id /* block */ indicatorColorTransformer;
@property (nonatomic, readonly) long long macIdiomStyle;
@property (nonatomic) long long macIdiomStyle;
@property (nonatomic, copy) UIImageSymbolConfiguration *preferredSymbolConfigurationForImage;
@property (nonatomic, readonly) bool showsActivityIndicator;
@property (nonatomic) bool showsActivityIndicator;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) long long subtitleLineBreakMode;
@property (nonatomic) long long subtitleLineBreakMode;
@property (nonatomic, copy) id /* block */ subtitleTextAttributesTransformer;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) long long titleAlignment;
@property (nonatomic) long long titleAlignment;
@property (nonatomic, readonly) long long titleLineBreakMode;
@property (nonatomic) long long titleLineBreakMode;
@property (nonatomic, readonly) double titlePadding;
@property (nonatomic) double titlePadding;
@property (nonatomic, copy) id /* block */ titleTextAttributesTransformer;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)borderedButtonConfiguration;
+ (id)borderedProminentButtonConfiguration;
+ (id)borderedTintedButtonConfiguration;
+ (id)borderlessButtonConfiguration;
+ (id)filledButtonConfiguration;
+ (id)grayButtonConfiguration;
+ (id)plainButtonConfiguration;
+ (bool)supportsSecureCoding;
+ (id)tintedButtonConfiguration;

- (void).cxx_destruct;
- (bool)_alwaysApplyTitleAlignment;
- (id)_apiValue;
- (void)_copyValuesFromConfiguration:(id)arg1;
- (long long)_dci_indicator;
- (id /* block */)_dci_indicatorColorTransformer;
- (void)_dci_setIndicator:(long long)arg1;
- (void)_dci_setIndicatorColorTransformer:(id /* block */)arg1;
- (bool)_hasImage;
- (bool)_hasMultilineSubtitle;
- (bool)_hasMultilineTitle;
- (bool)_hasObscuringBackground;
- (bool)_hasOversizedSubtitle;
- (bool)_hasOversizedTitle;
- (bool)_hasSubtitle;
- (bool)_hasSymbolImage;
- (bool)_hasTitle;
- (bool)_honorsTintInMacIdiom;
- (id)_initWithBehaviors:(id)arg1;
- (bool)_isRoundButton;
- (void)_resolveValuesWithButton:(id)arg1;
- (id)_resolvedActivityIndicatorColor;
- (double)_resolvedActivityIndicatorSize;
- (id)_resolvedImage;
- (id)_resolvedImageColor;
- (double)_resolvedImageReservation;
- (id)_resolvedIndicator;
- (id)_resolvedIndicatorColor;
- (double)_resolvedIndicatorPadding;
- (id)_resolvedIndicatorSymbolConfiguration;
- (long long)_resolvedMacIdiomStyle;
- (id)_resolvedSubtitle;
- (id)_resolvedSymbolConfiguration;
- (id)_resolvedTitle;
- (long long)_resolvedTitleAlignment;
- (void)_setAlwaysApplyTitleAlignment:(bool)arg1;
- (void)_setSwiftBridgingBackground:(id)arg1;
- (id)_spiValue;
- (id)_updateFromButton:(id)arg1;
- (id /* block */)activityIndicatorColorTransformer;
- (id)attributedSubtitle;
- (id)attributedTitle;
- (bool)automaticallyUpdateForSelection;
- (id)background;
- (id)baseBackgroundColor;
- (id)baseForegroundColor;
- (long long)buttonSize;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cornerStyle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id /* block */)imageColorTransformer;
- (double)imagePadding;
- (unsigned long long)imagePlacement;
- (double)imageReservation;
- (long long)indicator;
- (id /* block */)indicatorColorTransformer;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)macIdiomStyle;
- (id)preferredSymbolConfigurationForImage;
- (void)setActivityIndicatorColorTransformer:(id /* block */)arg1;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setAutomaticallyUpdateForSelection:(bool)arg1;
- (void)setBackground:(id)arg1;
- (void)setBaseBackgroundColor:(id)arg1;
- (void)setBaseForegroundColor:(id)arg1;
- (void)setButtonSize:(long long)arg1;
- (void)setContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCornerStyle:(long long)arg1;
- (void)setDefaultContentInsets;
- (void)setImage:(id)arg1;
- (void)setImageColorTransformer:(id /* block */)arg1;
- (void)setImagePadding:(double)arg1;
- (void)setImagePlacement:(unsigned long long)arg1;
- (void)setImageReservation:(double)arg1;
- (void)setIndicator:(long long)arg1;
- (void)setIndicatorColorTransformer:(id /* block */)arg1;
- (void)setMacIdiomStyle:(long long)arg1;
- (void)setPreferredSymbolConfigurationForImage:(id)arg1;
- (void)setShowsActivityIndicator:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLineBreakMode:(long long)arg1;
- (void)setSubtitleTextAttributesTransformer:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAlignment:(long long)arg1;
- (void)setTitleLineBreakMode:(long long)arg1;
- (void)setTitlePadding:(double)arg1;
- (void)setTitleTextAttributesTransformer:(id /* block */)arg1;
- (bool)showsActivityIndicator;
- (id)subtitle;
- (long long)subtitleLineBreakMode;
- (id /* block */)subtitleTextAttributesTransformer;
- (id)symbolStyleForSize:(long long)arg1 hasText:(bool)arg2;
- (id)title;
- (long long)titleAlignment;
- (long long)titleLineBreakMode;
- (double)titlePadding;
- (id /* block */)titleTextAttributesTransformer;
- (id)updatedConfigurationForButton:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)ckCreateButtonConfigurationWithType:(long long)arg1 withImage:(id)arg2;
+ (id)ckCreateButtonConfigurationWithType:(long long)arg1 withImage:(id)arg2 withTitle:(id)arg3 withFont:(id)arg4;
+ (id)ckCreateButtonConfigurationWithType:(long long)arg1 withTitle:(id)arg2;
+ (id)ckCreateButtonConfigurationWithType:(long long)arg1 withTitle:(id)arg2 withFont:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

+ (id)_mapsui_configurationForPrimaryType:(unsigned long long)arg1;
+ (id)_mapsui_filledButtonConfiguration;
+ (id)_mapsui_grayButtonConfiguration;
+ (id)_mapsui_primaryHeaderActionConfiguration;
+ (id)_mapsui_secondaryHeaderActionConfiguration;
+ (id)_mapsui_textButtonConfiguration;
+ (id)_mapsui_textButtonConfigurationWithFont:(id)arg1 textColor:(id)arg2;
+ (id)_setupButtonConfiguration:(id)arg1;
+ (id)_setupDirectionsButtonConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_filledTintedButtonConfiguration;
+ (id)ic_plainButtonConfiguration;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)pkui_createPlainButtonConfiguration;
+ (id)pkui_createPlainMinimalButtonConfiguration;
+ (id)pkui_plainConfigurationWithImage:(id)arg1 foregroundColor:(id)arg2;
+ (id)pkui_plainConfigurationWithImage:(id)arg1 imageConfiguration:(id)arg2 foregroundColor:(id)arg3;
+ (id)pkui_plainConfigurationWithTitle:(id)arg1 font:(id)arg2;
+ (id)pkui_plainConfigurationWithTitle:(id)arg1 font:(id)arg2 lineBreakMode:(long long)arg3 textAlignment:(long long)arg4;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

+ (id /* block */)_sbui_titleTextAttributesTransformerForTitleFont:(id)arg1;
+ (id)sbui_systemApertureSymbolButtonConfiguration;
+ (id)sbui_systemApertureTextButtonConfiguration;
+ (id)sbui_systemApertureTextButtonConfigurationCompatibleWithTraitCollection:(id)arg1;

@end
