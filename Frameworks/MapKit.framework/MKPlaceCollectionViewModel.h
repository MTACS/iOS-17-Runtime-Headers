
@interface MKPlaceCollectionViewModel : NSObject {
    UIColor * _backgroundColor;
    UIImage * _collectionImage;
    NSAttributedString * _collectionLongTitle;
    NSAttributedString * _collectionTitle;
    long long  _context;
    NSObject<OS_dispatch_queue> * _imageLoadingQueue;
    bool  _isSaved;
    bool  _isUsingInjectedFont;
    struct CGSize { 
        double width; 
        double height; 
    }  _photoSize;
    GEOPlaceCollection * _placeCollection;
    UIImage * _publisherLogoImage;
    NSObject<OS_dispatch_queue> * _publisherLogoImageQueue;
    double  _screenScale;
    NSAttributedString * _secondaryCollectionTitle;
    <MKCuratedCollectionsSyncCoordinator> * _syncCoordinator;
    UIFont * _titleFont;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) NSAttributedString *collectionLongTitle;
@property (nonatomic, retain) NSAttributedString *collectionTitle;
@property (nonatomic) bool isSaved;
@property (nonatomic) struct CGSize { double x1; double x2; } photoSize;
@property (nonatomic, readonly) GEOPlaceCollection *placeCollection;
@property (retain) UIImage *publisherLogoImage;
@property (nonatomic, retain) NSAttributedString *secondaryCollectionTitle;
@property (nonatomic, retain) <MKCuratedCollectionsSyncCoordinator> *syncCoordinator;

- (void).cxx_destruct;
- (void)_publisherImageWithIdentifier:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)backgroundColor;
- (void)collectionImageForSize:(struct CGSize { double x1; double x2; })arg1 onCompletion:(id /* block */)arg2;
- (id)collectionLongTitle;
- (id)collectionTitle;
- (void)contentCategorySizeDidChange;
- (id)description;
- (id)initWithGEOPlaceCollection:(id)arg1 usingSyncCoordinator:(id)arg2 inContext:(long long)arg3 usingTitleFont:(id)arg4;
- (void)initializeFonts;
- (bool)isSaved;
- (struct CGSize { double x1; double x2; })photoSize;
- (id)placeCollection;
- (void)publisherIconImageWithCompletion:(id /* block */)arg1;
- (id)publisherLogoImage;
- (void)publisherLogoImageWithCompletion:(id /* block */)arg1;
- (id)secondaryCollectionTitle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCollectionLongTitle:(id)arg1;
- (void)setCollectionTitle:(id)arg1;
- (void)setIsSaved:(bool)arg1;
- (void)setPhotoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPublisherLogoImage:(id)arg1;
- (void)setSecondaryCollectionTitle:(id)arg1;
- (void)setSyncCoordinator:(id)arg1;
- (bool)shouldDisplayMetadata;
- (id)syncCoordinator;

@end
