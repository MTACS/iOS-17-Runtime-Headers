
@interface IMWallpaperMetadataColor : NSObject <NSSecureCoding> {
    IMWallpaperMetadataColor_Impl * swiftImpl;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

@end
