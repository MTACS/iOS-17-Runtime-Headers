
@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto> {
    GEOMapItemPhotosAttribution * _attribution;
    GEOPDCaptionedPhoto * _captionedPhoto;
    GEOPDPhoto * _photo;
    <GEOPhotoInfoSource> * _photoInfoSource;
}

@property (nonatomic, readonly) GEOMapItemPhotosAttribution *attribution;
@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *backgroundJoeColor;
@property (nonatomic, readonly) bool businessProvided;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool displayFullScreenPhotoGallery;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool highQuality;
@property (nonatomic, readonly) bool isBackgroundJoeColorCurated;
@property (nonatomic, readonly) NSString *licenseDescription;
@property (nonatomic, readonly) NSURL *licenseURL;
@property (nonatomic, readonly) bool needsObfuscationWhenRenderedInFullScreen;
@property (nonatomic, readonly) double sizeRatio;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, readonly) bool useGallery;

- (void).cxx_destruct;
- (id)attribution;
- (id)author;
- (id)backgroundJoeColor;
- (id)bestPhotoForFrameSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 options:(id)arg3;
- (id)bestPhotoForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(bool)arg2;
- (id)bestPhotoForSize:(struct CGSize { double x1; double x2; })arg1 options:(id)arg2;
- (bool)businessProvided;
- (id)caption;
- (id)dateCreated;
- (bool)displayFullScreenPhotoGallery;
- (bool)highQuality;
- (id)initWithCaptionedPhoto:(id)arg1;
- (id)initWithCaptionedPhoto:(id)arg1 attribution:(id)arg2;
- (id)initWithPhoto:(id)arg1;
- (id)initWithPhoto:(id)arg1 attribution:(id)arg2;
- (bool)isBackgroundJoeColorCurated;
- (id)largestPhoto;
- (id)licenseDescription;
- (id)licenseURL;
- (bool)needsObfuscationWhenRenderedInFullScreen;
- (double)sizeRatio;
- (id)uid;
- (bool)useGallery;

@end
