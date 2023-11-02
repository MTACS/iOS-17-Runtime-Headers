
@interface SUArtworkCellContext : SUCellConfigurationContext {
    SUImageCache * _imageCache;
    ISURLOperationPool * _imagePool;
    SUImageDataProvider * _imageProvider;
    UIImage * _placeholderImage;
}

@property (nonatomic, retain) SUImageCache *imageCache;
@property (nonatomic, retain) ISURLOperationPool *imagePool;
@property (nonatomic, retain) SUImageDataProvider *imageProvider;
@property (nonatomic, retain) UIImage *placeholderImage;

- (void)dealloc;
- (id)imageCache;
- (id)imagePool;
- (id)imageProvider;
- (id)placeholderImage;
- (void)setImageCache:(id)arg1;
- (void)setImagePool:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;

@end
