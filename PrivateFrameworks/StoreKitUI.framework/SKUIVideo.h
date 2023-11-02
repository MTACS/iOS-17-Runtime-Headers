
@interface SKUIVideo : NSObject {
    <SKUIArtworkProviding> * _artworks;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) <SKUIArtworkProviding> *artworks;

- (void).cxx_destruct;
- (id)URL;
- (id)artworks;
- (id)initWithVideoDictionary:(id)arg1;

@end
