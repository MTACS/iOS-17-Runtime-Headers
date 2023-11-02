
@interface MPStoreArtworkRequestToken : NSObject <MPArtworkDataSourceVisualIdenticality, NSSecureCoding> {
    long long  _artworkInfoType;
    NSURL * _artworkURL;
    NSString * _cropStyle;
    NSString * _format;
    ICStoreArtworkInfo * _imageArtworkInfo;
    NSString * _sourceEditorialArtworkKind;
    ICStoreVideoArtworkInfo * _videoArtworkInfo;
}

@property (nonatomic) long long artworkInfoType;
@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSString *cropStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) ICStoreArtworkInfo *imageArtworkInfo;
@property (nonatomic, copy) NSString *sourceEditorialArtworkKind;
@property (readonly) Class superclass;
@property (nonatomic, copy) ICStoreVideoArtworkInfo *videoArtworkInfo;

+ (bool)supportsSecureCoding;
+ (id)tokenWithImageArtworkInfo:(id)arg1;
+ (id)tokenWithVideoArtworkInfo:(id)arg1;

- (void).cxx_destruct;
- (long long)artworkInfoType;
- (id)artworkURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)imageArtworkInfo;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setArtworkInfoType:(long long)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setCropStyle:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setImageArtworkInfo:(id)arg1;
- (void)setSourceEditorialArtworkKind:(id)arg1;
- (void)setVideoArtworkInfo:(id)arg1;
- (id)sourceEditorialArtworkKind;
- (id)stringRepresentation;
- (id)videoArtworkInfo;

@end
