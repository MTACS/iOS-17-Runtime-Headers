
@interface MRUArtworkController : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkFittingSize;
    double  _artworkLoadingTimeout;
    MSVTimer * _artworkTimer;
    MPArtworkCatalog * _catalog;
    UIView<MRUArtworkControllerDelegate> * _delegate;
    MRUImageLoader * _imageLoader;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } artworkFittingSize;
@property (nonatomic) double artworkLoadingTimeout;
@property (nonatomic, retain) MSVTimer *artworkTimer;
@property (nonatomic, retain) MPArtworkCatalog *catalog;
@property (nonatomic) UIView<MRUArtworkControllerDelegate> *delegate;
@property (nonatomic, retain) MRUImageLoader *imageLoader;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })artworkFittingSize;
- (double)artworkLoadingTimeout;
- (id)artworkTimer;
- (id)catalog;
- (id)delegate;
- (id)imageLoader;
- (id)init;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setArtworkFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setArtworkLoadingTimeout:(double)arg1;
- (void)setArtworkTimer:(id)arg1;
- (void)setCatalog:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageLoader:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateArtworkFittingSize;

@end
