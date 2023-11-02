
@interface PXPersonImageRequest : NSObject {
    NSTimer * _imageLoadInvalidationTimer;
    unsigned long long  _imageRequestTag;
    <PXPerson> * _person;
}

@property (nonatomic, retain) NSTimer *imageLoadInvalidationTimer;
@property (nonatomic) unsigned long long imageRequestTag;
@property (nonatomic, readonly) <PXPerson> *person;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)imageLoadInvalidationTimer;
- (unsigned long long)imageRequestTag;
- (id)initWithPerson:(id)arg1;
- (id)person;
- (void)requestFaceCropWithOptions:(id)arg1 timeout:(double)arg2 resultHandler:(id /* block */)arg3;
- (void)requestImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 cropFactor:(unsigned long long)arg2 cacheResult:(bool)arg3 boundFaceRect:(bool)arg4 timeout:(double)arg5 withCompletion:(id /* block */)arg6;
- (void)setImageLoadInvalidationTimer:(id)arg1;
- (void)setImageRequestTag:(unsigned long long)arg1;

@end