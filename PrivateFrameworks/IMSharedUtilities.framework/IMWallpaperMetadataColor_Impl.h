
@interface IMWallpaperMetadataColor_Impl : NSObject <NSSecureCoding> {
    void alpha;
    void alphaKey;
    void blue;
    void blueKey;
    void green;
    void greenKey;
    void red;
    void redKey;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (bool)isEqual:(id)arg1;

@end
