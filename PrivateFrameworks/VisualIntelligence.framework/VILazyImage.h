
@interface VILazyImage : NSObject <VIImageContent> {
    VIImage * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _knownImageSize;
    id /* block */  _loader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_image;
- (void)_loadImageIfPossible;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithImageLoader:(id /* block */)arg1;
- (id)initWithImageLoader:(id /* block */)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)isLoaded;
- (unsigned int)orientation;
- (struct __CVBuffer { }*)pixelBuffer;

@end
