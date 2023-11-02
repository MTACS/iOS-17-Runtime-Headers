
@interface MUPhotoSliderTileProvider : NSObject {
    MKMapItem * _mapItem;
    NSArray * _photos;
    bool  _showFullScreen;
}

@property (nonatomic, readonly) long long displayType;
@property (nonatomic, readonly) NSArray *photos;
@property (nonatomic, readonly) bool shouldRouteToPhotoThumbnailGallery;
@property (nonatomic, readonly) bool showARPCallToActionAttributionAtEndOfSlider;
@property (nonatomic, readonly) bool showFullScreen;
@property (nonatomic, readonly) bool showMorePhotoPunchoutAtEndOfSlider;
@property (nonatomic, readonly) bool showPhotoAttributionAtEndOfSlider;

- (void).cxx_destruct;
- (id)_albumOverlayForPhoto:(id)arg1;
- (bool)_canShowARPCallToAction;
- (id)_flatListOverlayForPhoto:(id)arg1;
- (id)_photoAlbumForPhoto:(id)arg1;
- (void)_setup;
- (void)_setupForFlatPhotoList;
- (void)_setupForPhotoAlbums;
- (id)albumIdForPhoto:(id)arg1;
- (long long)displayType;
- (id)initWithMapItem:(id)arg1;
- (unsigned long long)numberOfPhotos;
- (id)overlayForPhoto:(id)arg1;
- (id)photoItemAtIndex:(unsigned long long)arg1;
- (id)photos;
- (bool)shouldRouteToPhotoThumbnailGallery;
- (bool)showARPCallToActionAttributionAtEndOfSlider;
- (bool)showFullScreen;
- (bool)showMorePhotoPunchoutAtEndOfSlider;
- (bool)showPhotoAttributionAtEndOfSlider;
- (id)yourPhotosTileOverlay;

@end
