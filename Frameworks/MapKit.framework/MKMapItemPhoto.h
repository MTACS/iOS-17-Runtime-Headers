
@interface MKMapItemPhoto : NSObject <MUPhotoTileViewModel> {
    _MKMapItemPhotosAttribution * _attribution;
    <GEOMapItemPhoto> * _geoMapItemPhoto;
    long long  _photoStyle;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) _MKMapItemPhotosAttribution *attribution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool displayFullScreenPhotoGallery;
@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly) <GEOMapItemPhoto> *geoMapItemPhoto;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *largestPhotoURL;
@property (nonatomic, readonly) NSString *license;
@property (nonatomic, readonly) bool needsObfuscationWhenRenderedInFullScreen;
@property (nonatomic, readonly) NSString *photoID;
@property (nonatomic, readonly) long long photoStyle;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) bool useGallery;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void).cxx_destruct;
- (id)attribution;
- (bool)displayFullScreenPhotoGallery;
- (long long)format;
- (id)geoMapItemPhoto;
- (id)initWithGeoMapItemPhoto:(id)arg1;
- (id)initWithGeoMapItemPhoto:(id)arg1 fallbackTitle:(id)arg2;
- (id)initWithGeoMapItemPhoto:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)initWithPictureItem:(id)arg1;
- (id)largestPhotoURL;
- (id)license;
- (bool)needsObfuscationWhenRenderedInFullScreen;
- (id)photoID;
- (long long)photoStyle;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)urlForBestPhotoForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)useGallery;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (void)configureWithSize:(struct CGSize { double x1; double x2; })arg1 imageProvider:(id /* block */)arg2;

@end
