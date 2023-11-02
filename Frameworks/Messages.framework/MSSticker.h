
@interface MSSticker : NSObject <MSStickerPrivate> {
    CKImageData * __imageData;
    NSError * __stickerError;
    UIImage * __thumbnail;
    NSDictionary * _attributionInfo;
    NSData * _data;
    NSString * _externalURI;
    NSURL * _imageFileURL;
    NSString * _localizedDescription;
    NSData * _metadata;
    NSArray * _representations;
    unsigned long long  _stickerEffectType;
    NSUUID * _stickerIdentifier;
    NSString * _stickerName;
    NSString * _stickerPackGUID;
}

@property (nonatomic, retain) CKImageData *_imageData;
@property (nonatomic, retain) NSError *_stickerError;
@property (nonatomic, retain) UIImage *_thumbnail;
@property (nonatomic, readonly) NSURL *animatedImageCacheURL;
@property (nonatomic, readonly) NSDictionary *attributionInfo;
@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalURI;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *imageFileURL;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, readonly) NSArray *representations;
@property (nonatomic) unsigned long long stickerEffectType;
@property (nonatomic, readonly) NSUUID *stickerIdentifier;
@property (nonatomic, readonly) NSString *stickerName;
@property (nonatomic, retain) NSString *stickerPackGUID;
@property (readonly) Class superclass;

+ (id)MSStickerPreviewCacheKeyForSticker:(id)arg1;
+ (bool)_isHEICSupported;
+ (id)_stickerRepresentationsForImageFileURL:(id)arg1;
+ (id)stickerWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_convertImageFileURLIfNeeded;
- (void)_generateImageData;
- (void)_generateImageDataFromRepresentation:(id)arg1;
- (void)_generateImageDataFromURL:(id)arg1;
- (void)_generateThumbnail;
- (id)_imageData;
- (id)_stickerError;
- (id)_thumbnail;
- (id)accessibilityLabel;
- (id)animatedImageCacheURL;
- (id)attributionInfo;
- (id)data;
- (id)description;
- (id)externalURI;
- (id)imageFileURL;
- (id)initWithContentsOfFileURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 data:(id)arg2 externalURI:(id)arg3 localizedDescription:(id)arg4 error:(id*)arg5;
- (id)initWithContentsOfURL:(id)arg1 data:(id)arg2 localizedDescription:(id)arg3 error:(id*)arg4;
- (id)initWithContentsOfURL:(id)arg1 externalURI:(id)arg2 localizedDescription:(id)arg3 error:(out id*)arg4;
- (id)initWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3;
- (id)initWithFileURL:(id)arg1 identifier:(id)arg2 localizedDescription:(id)arg3;
- (id)initWithStickerIdentifier:(id)arg1 representations:(id)arg2 externalURI:(id)arg3 localizedDescription:(id)arg4;
- (id)initWithStickerIdentifier:(id)arg1 representations:(id)arg2 stickerName:(id)arg3 effectType:(long long)arg4 externalURI:(id)arg5 localizedDescription:(id)arg6 metadata:(id)arg7 attributionInfo:(id)arg8;
- (id)initWithStickerIdentifier:(id)arg1 representations:(id)arg2 stickerName:(id)arg3 externalURI:(id)arg4 localizedDescription:(id)arg5;
- (id)localizedDescription;
- (id)metadata;
- (id)representations;
- (void)setStickerEffectType:(unsigned long long)arg1;
- (void)setStickerPackGUID:(id)arg1;
- (void)set_imageData:(id)arg1;
- (void)set_stickerError:(id)arg1;
- (void)set_thumbnail:(id)arg1;
- (unsigned long long)stickerEffectType;
- (id)stickerIdentifier;
- (id)stickerName;
- (id)stickerPackGUID;

@end
