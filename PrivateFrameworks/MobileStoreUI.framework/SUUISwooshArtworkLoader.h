
@interface SUUISwooshArtworkLoader : NSObject <SUUIArtworkRequestDelegate> {
    SUUIResourceLoader * _artworkLoader;
    NSMapTable * _artworkRequestIDs;
    SUUIImageDataConsumer * _imageDataConsumer;
    NSMutableIndexSet * _outstandingRequestIDs;
    UIImage * _placeholderImage;
    SUUISwooshViewController * _swooshViewController;
}

@property (nonatomic, readonly) SUUIResourceLoader *artworkLoader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIImageDataConsumer *imageDataConsumer;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SUUISwooshViewController *swooshViewController;

- (void).cxx_destruct;
- (id)artworkLoader;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (unsigned long long)artworkRequestIdentifierForObject:(id)arg1;
- (id)cachedImageForObject:(id)arg1;
- (void)cancelImageLoading;
- (void)deprioritizePendingImageLoads;
- (id)imageDataConsumer;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (bool)loadImageForObject:(id)arg1 URL:(id)arg2 reason:(long long)arg3;
- (bool)loadImageForObject:(id)arg1 artworkRequest:(id)arg2 reason:(long long)arg3;
- (void)loadImagesForNextPageWithReason:(long long)arg1;
- (id)placeholderImage;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (void)setImageDataConsumer:(id)arg1;
- (void)setPlaceholderColorWithColorScheme:(id)arg1;
- (id)swooshViewController;

@end
