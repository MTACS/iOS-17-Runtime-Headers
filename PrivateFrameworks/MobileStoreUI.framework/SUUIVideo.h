
@interface SUUIVideo : NSObject {
    <SUUIArtworkProviding> * _artworks;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) <SUUIArtworkProviding> *artworks;

- (void).cxx_destruct;
- (id)URL;
- (id)artworks;
- (id)initWithVideoDictionary:(id)arg1;

@end
