
@interface IMWallpaperMetadata : NSObject <NSSecureCoding> {
    IMWallpaperMetadata_Impl * swiftImpl;
}

@property (nonatomic, readonly) NSDictionary *backgroundColor;
@property (nonatomic, readonly) NSDictionary *fontColor;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) double fontWeight;
@property (nonatomic, readonly) bool isVertical;
@property (nonatomic, readonly) NSString *type;

+ (bool)supportsSecureCoding;
+ (id)wallpaperExtensionIdentifierFromType:(long long)arg1;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fontColor;
- (id)fontName;
- (double)fontSize;
- (double)fontWeight;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 fontWeight:(double)arg3 fontColor:(id)arg4 isVertical:(bool)arg5 type:(id)arg6 backgroundColor:(id)arg7;
- (bool)isVertical;
- (id)type;

@end
