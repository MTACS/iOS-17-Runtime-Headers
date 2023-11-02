
@interface _CRKImageLoader : NSObject <SFResourceLoader> {
    bool  _active;
    <_CRKImageLoaderDelegate> * _delegate;
    INUIImageLoader * _imageLoader;
}

@property (nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_CRKImageLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)sharedInstanceWithInitialDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)_loadSFImageForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_registerWithSearchFoundation;
- (void)_unregisterWithSearchFoundaton;
- (bool)active;
- (id)delegate;
- (bool)loadImage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)resourceIdentifierForLocalImageType:(int)arg1;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
