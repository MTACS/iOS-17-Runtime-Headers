
@interface ICPreviewDeviceInfo : NSObject {
    ICAppearanceInfo * _appearanceInfo;
    double  _imageSize;
    double  _scale;
}

@property (nonatomic, retain) ICAppearanceInfo *appearanceInfo;
@property (nonatomic) double imageSize;
@property (nonatomic) double scale;

+ (id)previewDeviceInfoForPreviewImage:(id)arg1;

- (void).cxx_destruct;
- (id)appearanceInfo;
- (id)description;
- (id)deviceInfoFromAddingAppearanceInfo:(id)arg1;
- (unsigned long long)hash;
- (double)imageSize;
- (id)init;
- (id)initWithImageSize:(double)arg1 scale:(double)arg2;
- (id)initWithImageSize:(double)arg1 scale:(double)arg2 appearanceInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (double)scale;
- (void)setAppearanceInfo:(id)arg1;
- (void)setImageSize:(double)arg1;
- (void)setScale:(double)arg1;

@end
