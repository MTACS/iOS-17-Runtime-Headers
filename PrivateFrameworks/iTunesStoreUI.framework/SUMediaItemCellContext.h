
@interface SUMediaItemCellContext : SUItemCellContext {
    double  _artworkWidth;
    long long  _hiddenMediaIconTypes;
    bool  _itemsHaveArtwork;
}

@property (nonatomic) double artworkWidth;
@property (nonatomic) long long hiddenMediaIconTypes;
@property (nonatomic) bool itemsHaveArtwork;

- (double)artworkWidth;
- (long long)hiddenMediaIconTypes;
- (id)init;
- (bool)itemsHaveArtwork;
- (void)setArtworkWidth:(double)arg1;
- (void)setHiddenMediaIconTypes:(long long)arg1;
- (void)setItemsHaveArtwork:(bool)arg1;

@end
