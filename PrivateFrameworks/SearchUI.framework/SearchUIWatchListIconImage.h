
@interface SearchUIWatchListIconImage : SearchUIImage {
    WLKArtworkVariantListing * _artwork;
}

@property (readonly) WLKArtworkVariantListing *artwork;

- (void).cxx_destruct;
- (id)artwork;
- (int)defaultCornerRoundingStyle;
- (id)initWithArtwork:(id)arg1;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
