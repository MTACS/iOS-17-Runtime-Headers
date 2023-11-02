
@interface TPSAssets : TPSSerializableObject <NSCopying, NSSecureCoding> {
    NSString * _alt;
    NSURL * _baseURL;
    NSString * _caption;
    NSString * _fallbackId;
    TPSGradient * _gradient;
    NSString * _imageId;
    NSString * _posterId;
    NSString * _symbolColor;
    NSString * _symbolId;
    NSString * _symbolSize;
    NSString * _thumbnailId;
    NSString * _videoId;
}

@property (nonatomic, copy) NSString *alt;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, copy) NSString *caption;
@property (nonatomic, copy) NSString *fallbackId;
@property (nonatomic, copy) TPSGradient *gradient;
@property (nonatomic, copy) NSString *imageId;
@property (nonatomic, copy) NSString *posterId;
@property (nonatomic, copy) NSString *symbolColor;
@property (nonatomic, copy) NSString *symbolId;
@property (nonatomic, copy) NSString *symbolSize;
@property (nonatomic, copy) NSString *thumbnailId;
@property (nonatomic, copy) NSString *videoId;

+ (id)assetsFromDictionary:(id)arg1;
+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alt;
- (id)baseURL;
- (id)caption;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackId;
- (id)gradient;
- (bool)hasImage;
- (bool)hasVideo;
- (unsigned long long)hash;
- (id)identifierForKey:(id)arg1 dictionary:(id)arg2;
- (id)imageId;
- (id)imageIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;
- (id)initWithSymbolId:(id)arg1 symbolColor:(id)arg2 symbolSize:(id)arg3 alt:(id)arg4 gradientColorStrings:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)posterId;
- (void)setAlt:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setFallbackId:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setImageId:(id)arg1;
- (void)setPosterId:(id)arg1;
- (void)setSymbolColor:(id)arg1;
- (void)setSymbolId:(id)arg1;
- (void)setSymbolSize:(id)arg1;
- (void)setThumbnailId:(id)arg1;
- (void)setVideoId:(id)arg1;
- (id)symbolColor;
- (id)symbolId;
- (id)symbolSize;
- (id)thumbnailId;
- (id)videoId;

@end
