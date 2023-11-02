
@interface ISImageDescriptor : NSObject <ISImageDescriptor, NSCopying, NSSecureCoding> {
    long long  _appearance;
    unsigned long long  _backgroundStyle;
    unsigned long long  _badgeOptions;
    long long  _contrast;
    bool  _graphicVariant;
    bool  _ignoreCache;
    unsigned long long  _languageDirection;
    long long  _layoutDirection;
    bool  _preferExtendedColorResources;
    NSString * _preferedResourceName;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    IFColor * _tintColor;
    unsigned long long  _variantOptions;
    long long  _vibrancy;
}

@property (nonatomic) long long appearance;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long badgeOptions;
@property (nonatomic, readonly) double continuousCornerRadius;
@property (nonatomic) long long contrast;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUUID *digest;
@property (nonatomic) bool drawBadge;
@property (nonatomic) bool drawBorder;
@property (nonatomic) bool graphicVariant;
@property (readonly) unsigned long long hash;
@property bool ignoreCache;
@property unsigned long long languageDirection;
@property (nonatomic) long long layoutDirection;
@property bool preferExtendedColorResources;
@property (retain) NSString *preferedResourceName;
@property (readonly) double sanitizedScale;
@property (readonly) struct CGSize { double x1; double x2; } sanitizedSize;
@property (nonatomic) double scale;
@property (nonatomic) bool selectedVariant;
@property (nonatomic) unsigned long long shape;
@property (nonatomic) bool shouldApplyMask;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic) bool templateVariant;
@property (nonatomic, retain) IFColor *tintColor;
@property (nonatomic) unsigned long long variantOptions;
@property (nonatomic) long long vibrancy;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)icnsImageDescriptors;
+ (id)imageDescriptorNamed:(id)arg1;
+ (id)imageDescriptorWithIconVariant:(int)arg1 options:(int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_recipe;
- (long long)appearance;
- (unsigned long long)backgroundStyle;
- (unsigned long long)badgeOptions;
- (double)continuousCornerRadius;
- (long long)contrast;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)digest;
- (bool)drawBadge;
- (bool)drawBorder;
- (void)encodeWithCoder:(id)arg1;
- (bool)graphicVariant;
- (unsigned long long)hash;
- (bool)ignoreCache;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)languageDirection;
- (long long)layoutDirection;
- (bool)preferExtendedColorResources;
- (id)preferedResourceName;
- (double)sanitizedScale;
- (struct CGSize { double x1; double x2; })sanitizedSize;
- (double)scale;
- (bool)selectedVariant;
- (void)setAppearance:(long long)arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setBadgeOptions:(unsigned long long)arg1;
- (void)setContrast:(long long)arg1;
- (void)setDrawBadge:(bool)arg1;
- (void)setDrawBorder:(bool)arg1;
- (void)setGraphicVariant:(bool)arg1;
- (void)setIgnoreCache:(bool)arg1;
- (void)setLanguageDirection:(unsigned long long)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setPreferExtendedColorResources:(bool)arg1;
- (void)setPreferedResourceName:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setSelectedVariant:(bool)arg1;
- (void)setShape:(unsigned long long)arg1;
- (void)setShouldApplyMask:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTemplateVariant:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setVariantOptions:(unsigned long long)arg1;
- (void)setVibrancy:(long long)arg1;
- (unsigned long long)shape;
- (bool)shouldApplyMask;
- (struct CGSize { double x1; double x2; })size;
- (bool)templateVariant;
- (id)tintColor;
- (unsigned long long)variantOptions;
- (long long)vibrancy;

// Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI

+ (id)skui_imageDescriptorForAuthorization;

@end
