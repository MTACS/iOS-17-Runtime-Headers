
@interface VUIMediaLibraryImageLoader : NSObject <TVImageLoader, VUIImageLoader> {
    NSMutableDictionary * _imageLoadContextsByImageIdentifier;
    NSOperationQueue * _imageLoadOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *imageLoadContextsByImageIdentifier;
@property (nonatomic, retain) NSOperationQueue *imageLoadOperationQueue;
@property (readonly) Class superclass;

+ (id)_scaledImageIdentifierWithImageIdentifier:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3;

- (void).cxx_destruct;
- (void)_cancelAllImageLoads;
- (id)_imageIdentifierWithImageLoadParams:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoaderIdentifier;
- (void)cancelLoad:(id)arg1;
- (void)dealloc;
- (id)imageKeyForObject:(id)arg1;
- (id)imageLoadContextsByImageIdentifier;
- (id)imageLoadOperationQueue;
- (id)init;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)setImageLoadContextsByImageIdentifier:(id)arg1;
- (void)setImageLoadOperationQueue:(id)arg1;

@end
