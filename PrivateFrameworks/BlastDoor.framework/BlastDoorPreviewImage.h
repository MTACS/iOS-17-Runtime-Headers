
@interface BlastDoorPreviewImage : NSObject {
    void previewImage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long frameCount;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) bool isMonoskiAsset;
@property (nonatomic, readonly) bool isScreenshot;
@property (nonatomic, readonly) NSString *stickerEffect;
@property (nonatomic, readonly) unsigned long long stickerEffectType;
@property (nonatomic, readonly) NSString *utTypeString;

- (void).cxx_destruct;
- (id)description;
- (long long)frameCount;
- (id)image;
- (id)init;
- (bool)isMonoskiAsset;
- (bool)isScreenshot;
- (id)stickerEffect;
- (unsigned long long)stickerEffectType;
- (id)utTypeString;

@end
