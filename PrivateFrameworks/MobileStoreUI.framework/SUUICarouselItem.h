
@interface SUUICarouselItem : NSObject {
    NSString * _accessibilityLabel;
    <SUUIArtworkProviding> * _artworkProvider;
    long long  _carouselItemIdentifier;
    SUUILink * _link;
}

@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, retain) <SUUIArtworkProviding> *artworkProvider;
@property (nonatomic, readonly) long long carouselItemIdentifier;
@property (nonatomic, readonly) SUUILink *link;

- (void).cxx_destruct;
- (void)_setLinkItem:(id)arg1;
- (id)accessibilityLabel;
- (id)artworkForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)artworkProvider;
- (long long)carouselItemIdentifier;
- (id)description;
- (id)initWithComponentContext:(id)arg1;
- (id)link;
- (void)setArtworkProvider:(id)arg1;

@end
