
@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    UIColor * _backgroundColor;
    bool  _backgroundColorLight;
    UIColor * _primaryTextColor;
    bool  _primaryTextColorLight;
    UIColor * _secondaryTextColor;
    bool  _secondaryTextColorLight;
    UIColor * _tertiaryTextColor;
    bool  _tertiaryTextColorLight;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (getter=isBackgroundColorLight, nonatomic, readonly) bool backgroundColorLight;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (getter=isPrimaryTextColorLight, nonatomic, readonly) bool primaryTextColorLight;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (getter=isSecondaryTextColorLight, nonatomic, readonly) bool secondaryTextColorLight;
@property (nonatomic, retain) UIColor *tertiaryTextColor;
@property (getter=isTertiaryTextColorLight, nonatomic, readonly) bool tertiaryTextColorLight;

+ (bool)supportsSecureCoding;
+ (id)translateFromMSVColorAnalysis:(id)arg1;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isBackgroundColorLight;
- (bool)isPrimaryTextColorLight;
- (bool)isSecondaryTextColorLight;
- (bool)isTertiaryTextColorLight;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setTertiaryTextColor:(id)arg1;
- (id)tertiaryTextColor;

@end
