
@interface IMWallpaperMetadata_Impl : NSObject <NSSecureCoding> {
    void backgroundColor;
    void backgroundColorKey;
    void fontColor;
    void fontColorKey;
    void fontName;
    void fontNameKey;
    void fontSize;
    void fontSizeKey;
    void fontWeight;
    void fontWeightKey;
    void isVertical;
    void isVerticalKey;
    void type;
    void typeKey;
}

@property (nonatomic, retain) IMWallpaperMetadataColor_Impl *backgroundColor;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) IMWallpaperMetadataColor_Impl *fontColor;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) double fontWeight;
@property (nonatomic, readonly) bool isVertical;
@property (nonatomic, readonly) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fontColor;
- (id)fontName;
- (double)fontSize;
- (double)fontWeight;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 fontWeight:(double)arg3 fontColor:(id)arg4 isVertical:(bool)arg5 type:(id)arg6 backgroundColor:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isVertical;
- (void)setBackgroundColor:(id)arg1;
- (void)setFontColor:(id)arg1;
- (id)type;

@end
