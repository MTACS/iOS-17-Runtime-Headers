
@interface JFXStillMediaItem : JTAssetMediaItem {
    bool  _hasGainMap;
    PVColorSpace * _imageColorSpace;
    float  _meteorPlusHeadroom;
    struct CGSize { 
        double width; 
        double height; 
    }  _sourceImageSize;
}

@property (nonatomic) bool hasGainMap;
@property (nonatomic, retain) PVColorSpace *imageColorSpace;
@property (nonatomic) float meteorPlusHeadroom;
@property (nonatomic) struct CGSize { double x1; double x2; } sourceImageSize;

+ (void)stillMediaItemWithLocalURL:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (double)JT_maximumPixelsForStillImage:(bool)arg1;
- (id)assetURL;
- (bool)canBeAddedToSequence;
- (id)colorSpace;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)durationAt30fps;
- (struct CGSize { double x1; double x2; })exportImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)generateLocalURLForAsset;
- (bool)hasGainMap;
- (bool)hasPhotoCharacteristic;
- (bool)hasVisualCharacteristic;
- (unsigned long long)hash;
- (struct CGImage { }*)hdrGainMapImageForURL:(id)arg1 renderingIntent:(int)arg2;
- (id)imageColorSpace;
- (struct CGImage { }*)imageForURL:(id)arg1 renderingIntent:(int)arg2;
- (struct CGImage { }*)imageForURL:(id)arg1 renderingIntent:(int)arg2 useAuxillaryMap:(bool)arg3;
- (struct CGSize { double x1; double x2; })imageSizeForRenderingIntent:(int)arg1 originalSize:(struct CGSize { double x1; double x2; })arg2;
- (id)info;
- (bool)isEqual:(id)arg1;
- (bool)isImageValid:(id)arg1 renderingIntent:(int)arg2 size:(struct CGSize { double x1; double x2; }*)arg3;
- (float)meteorPlusHeadroom;
- (struct CGSize { double x1; double x2; })playBackImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasGainMap:(bool)arg1;
- (void)setImageColorSpace:(id)arg1;
- (void)setMeteorPlusHeadroom:(float)arg1;
- (void)setSourceImageSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeForMaxPixels:(double)arg1 sourceSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })sizeForQuality:(int)arg1;
- (struct CGSize { double x1; double x2; })sourceImageSize;
- (struct CGSize { double x1; double x2; })thumbImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateAssetImageColorSpace;

@end
