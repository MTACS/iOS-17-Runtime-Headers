
@interface RadioArtworkCollection : NSObject <NSCopying> {
    NSArray * _artworks;
}

@property (nonatomic, readonly) NSArray *artworks;

- (void).cxx_destruct;
- (id)_artworksBySortingArtworks:(id)arg1;
- (id)artworks;
- (id)bestArtworkForPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (id)bestArtworkForPointSize:(struct CGSize { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArtworkVariants:(id)arg1;
- (id)initWithArtworks:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
