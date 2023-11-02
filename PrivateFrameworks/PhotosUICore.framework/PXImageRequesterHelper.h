
@interface PXImageRequesterHelper : PXObservable <PXChangeObserver> {
    <PXDisplayAsset> * _asset;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    UIImage * _image;
    PXImageRequester * _imageRequester;
    <PXUIImageProvider> * _mediaProvider;
    double  _scale;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (nonatomic, readonly) <PXUIImageProvider> *mediaProvider;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateAssetOrMediaProvider;
- (void)_updateContentsRect;
- (void)_updateImage;
- (void)_updateImageRequester;
- (id)asset;
- (struct CGSize { double x1; double x2; })contentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (void)didPublishChanges;
- (id)image;
- (id)imageRequester;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (double)scale;
- (void)setAsset:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageRequester:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setScale:(double)arg1;

@end
