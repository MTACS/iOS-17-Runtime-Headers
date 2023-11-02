
@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable> {
    UILabel * _countLabel;
    UIImageView * _countLabelBackgroundImageView;
    long long  _countLabelStyle;
    id /* block */  _displayCompletion;
    PKExtendedTraitCollection * _extendedTraitCollection;
    id  _extendedTraitObserver;
    long long  _geotaggablesCount;
    PXPlacesImageCache * _imageCache;
    bool  _imageIsPlaceholder;
    <PXPlacesMapThumbnailCurationDelegate> * _thumbnailCurationDelegate;
}

@property (nonatomic, retain) UILabel *countLabel;
@property (nonatomic, retain) UIImageView *countLabelBackgroundImageView;
@property (nonatomic, readonly) long long countLabelStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ displayCompletion;
@property (nonatomic, retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, retain) id extendedTraitObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPlacesImageCache *imageCache;
@property (nonatomic) bool imageIsPlaceholder;
@property (readonly) Class superclass;
@property (nonatomic) <PXPlacesMapThumbnailCurationDelegate> *thumbnailCurationDelegate;

+ (id)_thumbnailCreationOperationQueue;
+ (id)_thumbnailFetchOperationQueue;
+ (id)_thumbnailSelectionQueue;

- (void).cxx_destruct;
- (id)_countLabelBackgroundColor;
- (void)_fetchImageForGeotaggable:(id)arg1 renderer:(id)arg2 networkAccessAllowed:(bool)arg3;
- (void)_fetchImageWithNetworkAccessAllowed:(bool)arg1;
- (void)_hideCountLabel;
- (void)_processGeotaggable:(id)arg1 withImage:(struct CGImage { }*)arg2 popoverImageType:(long long)arg3 imageOptions:(unsigned long long)arg4 shouldCache:(bool)arg5 expectedGeotaggable:(id)arg6;
- (void)_processPostImage;
- (void)_reloadCount:(long long)arg1;
- (void)_reloadData:(bool)arg1;
- (void)_showCountLabel;
- (void)_updatePlaceholderImageIfNeeded;
- (id)countLabel;
- (id)countLabelBackgroundImageView;
- (long long)countLabelStyle;
- (void)dealloc;
- (id /* block */)displayCompletion;
- (id)extendedTraitCollection;
- (id)extendedTraitObserver;
- (id)imageCache;
- (bool)imageIsPlaceholder;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 extendedTraitCollection:(id)arg3 imageCache:(id)arg4 countLabelStyle:(long long)arg5;
- (id)preferredGeotaggableWithFallbackGeotaggable:(id)arg1;
- (void)prepareForReuse;
- (id)primaryGeotaggable;
- (id)renderToImage;
- (void)setAnnotation:(id)arg1;
- (void)setCountLabel:(id)arg1;
- (void)setCountLabelBackgroundImageView:(id)arg1;
- (void)setDisplayCompletion:(id /* block */)arg1;
- (void)setExtendedTraitCollection:(id)arg1;
- (void)setExtendedTraitObserver:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageIsPlaceholder:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setThumbnailCurationDelegate:(id)arg1;
- (id)thumbnailCurationDelegate;
- (void)traitCollectionDidChange:(id)arg1;
- (id)userCacheKey;

@end
