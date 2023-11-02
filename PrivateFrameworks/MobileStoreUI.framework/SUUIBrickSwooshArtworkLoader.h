
@interface SUUIBrickSwooshArtworkLoader : SUUISwooshArtworkLoader {
    long long  _artworkSize;
}

@property (nonatomic, readonly) SUUIBrickSwooshViewController *swooshViewController;

- (id)cachedImageForBrick:(id)arg1;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (bool)loadImageForBrick:(id)arg1 reason:(long long)arg2;
- (void)loadImagesForNextPageWithReason:(long long)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;

@end
