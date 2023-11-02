
@interface MSVArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _backgroundColorHex;
    bool  _backgroundColorLight;
    NSString * _primaryTextColorHex;
    bool  _primaryTextColorLight;
    NSString * _secondaryTextColorHex;
    bool  _secondaryTextColorLight;
    NSString * _tertiaryTextColorHex;
    bool  _tertiaryTextColorLight;
}

@property (nonatomic, retain) NSString *backgroundColorHex;
@property (getter=isBackgroundColorLight, nonatomic, readonly) bool backgroundColorLight;
@property (nonatomic, retain) NSString *primaryTextColorHex;
@property (getter=isPrimaryTextColorLight, nonatomic, readonly) bool primaryTextColorLight;
@property (nonatomic, retain) NSString *secondaryTextColorHex;
@property (getter=isSecondaryTextColorLight, nonatomic, readonly) bool secondaryTextColorLight;
@property (nonatomic, retain) NSString *tertiaryTextColorHex;
@property (getter=isTertiaryTextColorLight, nonatomic) bool tertiaryTextColorLight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id)backgroundColorHex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isBackgroundColorLight;
- (bool)isPrimaryTextColorLight;
- (bool)isSecondaryTextColorLight;
- (bool)isTertiaryTextColorLight;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)primaryTextColorHex;
- (id)secondaryTextColorHex;
- (void)setBackgroundColorHex:(id)arg1;
- (void)setPrimaryTextColorHex:(id)arg1;
- (void)setSecondaryTextColorHex:(id)arg1;
- (void)setTertiaryTextColorHex:(id)arg1;
- (void)setTertiaryTextColorLight:(bool)arg1;
- (id)tertiaryTextColorHex;

@end
