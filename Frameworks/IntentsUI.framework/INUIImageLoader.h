
@interface INUIImageLoader : NSObject <INImageLoading, SFResourceLoader> {
    <INUIImageLoaderDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIImageLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;
@property (readonly) Class superclass;

+ (id)registeredImageLoaderWithScreenDelegate;

- (void).cxx_destruct;
- (bool)canLoadImageDataForImage:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deregisterWithIntents;
- (void)deregisterWithSearchFoundation;
- (void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(struct { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (bool)loadImage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)loadImage:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)registerWithIntents;
- (void)registerWithSearchFoundation;
- (id)serviceIdentifier;
- (unsigned long long)servicePriority;
- (void)setDelegate:(id)arg1;

@end
