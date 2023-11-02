
@interface AMSUIAppearance : NSObject <NSCopying> {
    NSDictionary * __messageFontDictionary;
    NSDictionary * __titleFontDictionary;
}

@property (nonatomic, retain) NSDictionary *_messageFontDictionary;
@property (nonatomic, retain) NSDictionary *_titleFontDictionary;

+ (id)_accessoryButtonBackgroundColorWithDictionary:(id)arg1;
+ (id)_accessoryButtonColorWithDictionary:(id)arg1;
+ (id)_accessoryButtonFontWithDictionary:(id)arg1;
+ (id)_accessorySecondaryButtonBackgroundColorWithDictionary:(id)arg1;
+ (id)_accessorySecondaryButtonColorWithDictionary:(id)arg1;
+ (id)_accessorySecondaryButtonFontWithDictionary:(id)arg1;
+ (id)_backgroundColorWithDictionary:(id)arg1;
+ (id)_backgroundColorWithMetadataDictionary:(id)arg1;
+ (id)_backgroundImageWithDictionary:(id)arg1;
+ (id)_backgroundImageWithMetadataDictionary:(id)arg1;
+ (id)_defaultBackgroundColorForStyle:(unsigned long long)arg1 withTraitCollection:(id)arg2;
+ (id)_defaultButtonContentColorForStyle:(unsigned long long)arg1 isFooter:(bool)arg2;
+ (id)_defaultButtonIconColorForStyle:(unsigned long long)arg1 isFooter:(bool)arg2;
+ (id)_defaultButtonTextColorForStyle:(unsigned long long)arg1 isFooter:(bool)arg2;
+ (id)_defaultButtonTextFontForStyle:(unsigned long long)arg1 withTraitCollection:(id)arg2;
+ (id)_defaultImageViewColorForStyle:(unsigned long long)arg1;
+ (id)_defaultMessageColor;
+ (id)_defaultMessageFontForStyle:(unsigned long long)arg1 withTraitCollection:(id)arg2;
+ (id)_defaultSeparatorColor;
+ (id)_defaultTitleColor;
+ (id)_defaultTitleFontForStyle:(unsigned long long)arg1 withTraitCollection:(id)arg2;
+ (id)_footerButtonColorWithDictionary:(id)arg1;
+ (id)_footerButtonFontWithDictionary:(id)arg1;
+ (id)_gradientImageWithDictionary:(id)arg1;
+ (id)_gradientLayerTypeForRawValue:(id)arg1;
+ (long long)_iconAnimationPlayCount:(id)arg1;
+ (id)_imageSymbolConfigurationWithDictionary:(id)arg1;
+ (id)_imageTintColorWithDictionary:(id)arg1;
+ (id)_impressionAnimationIdentifierWithDictionary:(id)arg1;
+ (id)_messageFontWithDictionary:(id)arg1;
+ (id)_messageTextColorWithDictionary:(id)arg1;
+ (long long)_primaryImageRenderingModeWithDictionary:(id)arg1;
+ (id)_separatorColorWithDictionary:(id)arg1;
+ (id)_titleFontWithDictionary:(id)arg1;
+ (id)_titleTextColorWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_messageFontDictionary;
- (id)_titleFontDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)set_messageFontDictionary:(id)arg1;
- (void)set_titleFontDictionary:(id)arg1;

@end
