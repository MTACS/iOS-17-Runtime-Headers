
@interface MRUImageLoader : NSObject {
    bool  _cacheImages;
    MPArtworkCatalog * _catalog;
    UIView * _destination;
    struct CGSize { 
        double width; 
        double height; 
    }  _effectiveScaledFittingSizeForConfiguration;
    long long  _failedLoadingCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _fittingSize;
    bool  _formatImages;
    id /* block */  _imageHandler;
    <MPArtworkDataSourceVisualIdenticality> * _lastFailedArtworkIdentifier;
    <MPArtworkDataSourceVisualIdenticality> * _lastLoadedArtworkIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastVendedScaledFittingSize;
    double  _scale;
    long long  _state;
}

@property (nonatomic) bool cacheImages;
@property (nonatomic, retain) MPArtworkCatalog *catalog;
@property (nonatomic, readonly) UIView *destination;
@property (nonatomic) struct CGSize { double x1; double x2; } effectiveScaledFittingSizeForConfiguration;
@property (nonatomic) long long failedLoadingCount;
@property (nonatomic) struct CGSize { double x1; double x2; } fittingSize;
@property (nonatomic) bool formatImages;
@property (nonatomic, readonly) id /* block */ imageHandler;
@property (nonatomic, retain) <MPArtworkDataSourceVisualIdenticality> *lastFailedArtworkIdentifier;
@property (nonatomic, retain) <MPArtworkDataSourceVisualIdenticality> *lastLoadedArtworkIdentifier;
@property (nonatomic) struct CGSize { double x1; double x2; } lastVendedScaledFittingSize;
@property (nonatomic) double scale;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (bool)cacheImages;
- (id)catalog;
- (void)configureCatalog;
- (void)dealloc;
- (id)destination;
- (struct CGSize { double x1; double x2; })effectiveScaledFittingSizeForConfiguration;
- (long long)failedLoadingCount;
- (struct CGSize { double x1; double x2; })fittingSize;
- (bool)formatImages;
- (id /* block */)imageHandler;
- (id)initWithDestination:(id)arg1 imageHandler:(id /* block */)arg2;
- (id)lastFailedArtworkIdentifier;
- (id)lastLoadedArtworkIdentifier;
- (struct CGSize { double x1; double x2; })lastVendedScaledFittingSize;
- (double)scale;
- (struct CGSize { double x1; double x2; })scaledFittingSize;
- (void)setCacheImages:(bool)arg1;
- (void)setCatalog:(id)arg1;
- (void)setEffectiveScaledFittingSizeForConfiguration:(struct CGSize { double x1; double x2; })arg1;
- (void)setFailedLoadingCount:(long long)arg1;
- (void)setFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFormatImages:(bool)arg1;
- (void)setLastFailedArtworkIdentifier:(id)arg1;
- (void)setLastLoadedArtworkIdentifier:(id)arg1;
- (void)setLastVendedScaledFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)updateCatalog:(id)arg1;
- (void)updateFittingSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (bool)vendCachedImageIfPossible;
- (bool)wouldLoadNewImageForCatalog:(id)arg1;

@end
