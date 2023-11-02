
@interface TFImageFetcher : NSObject {
    double  _displayedScreenScale;
}

@property (nonatomic, readonly) double displayedScreenScale;

- (id)_urlStringForIconArtwork:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 fileFormat:(id)arg3;
- (double)displayedScreenScale;
- (void)fetchIconArtwork:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 intoView:(id)arg3 animated:(bool)arg4;
- (id)init;

@end
