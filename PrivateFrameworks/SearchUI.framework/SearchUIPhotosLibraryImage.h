
@interface SearchUIPhotosLibraryImage : SearchUIImage {
    PHAsset * _asset;
    PHFetchResult * _fetchResult;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
}

@property (retain) PHAsset *asset;
@property (retain) PHFetchResult *fetchResult;
@property struct CGSize { double x1; double x2; } pixelSize;
@property (retain) SFPhotosLibraryImage *sfImage;

- (void).cxx_destruct;
- (id)asset;
- (id)fetchAsset;
- (id)fetchResult;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)photoIdentifier;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)rejectPerson:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)supportsFastPathShadow;

@end
