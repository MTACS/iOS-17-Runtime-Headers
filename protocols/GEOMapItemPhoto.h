
@protocol GEOMapItemPhoto <NSObject>

@required

- (GEOMapItemPhotosAttribution *)attribution;
- (NSString *)author;
- (NSString *)backgroundJoeColor;
- (<GEOMapItemPhotoInfo> *)bestPhotoForFrameSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 options:(GEOMapItemPhotoOptions *)arg3;
- (<GEOMapItemPhotoInfo> *)bestPhotoForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (<GEOMapItemPhotoInfo> *)bestPhotoForSize:(struct CGSize { double x1; double x2; })arg1 options:(GEOMapItemPhotoOptions *)arg2;
- (bool)businessProvided;
- (NSString *)caption;
- (NSDate *)dateCreated;
- (bool)displayFullScreenPhotoGallery;
- (bool)highQuality;
- (bool)isBackgroundJoeColorCurated;
- (<GEOMapItemPhotoInfo> *)largestPhoto;
- (NSString *)licenseDescription;
- (NSURL *)licenseURL;
- (bool)needsObfuscationWhenRenderedInFullScreen;
- (double)sizeRatio;
- (NSString *)uid;
- (bool)useGallery;

@end
