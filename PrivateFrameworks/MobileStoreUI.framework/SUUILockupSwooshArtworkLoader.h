
@interface SUUILockupSwooshArtworkLoader : SUUISwooshArtworkLoader {
    SUUIItemArtworkContext * _context;
    SUUIVideoImageDataConsumer * _videoImageConsumer;
    UIImage * _videoPlaceholderImage;
}

@property (nonatomic, readonly) SUUILockupSwooshViewController *swooshViewController;

- (void).cxx_destruct;
- (id)cachedImageForItem:(id)arg1;
- (id)cachedImageForVideo:(id)arg1;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (bool)loadImageForItem:(id)arg1 reason:(long long)arg2;
- (bool)loadImageForVideo:(id)arg1 reason:(long long)arg2;
- (void)loadImagesForNextPageWithReason:(long long)arg1;
- (id)placeholderImageForItem:(id)arg1;
- (id)placeholderImageForVideo:(id)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;

@end
