
@interface MPArtworkConfiguration : NSObject {
    ML3ArtworkConfiguration * _artworkConfiguration;
}

@property (nonatomic, retain) ML3ArtworkConfiguration *artworkConfiguration;

+ (id)systemConfiguration;

- (void).cxx_destruct;
- (id)artworkConfiguration;
- (id)description;
- (id)initWithConfigurationDictionaries:(id)arg1;
- (void)setArtworkConfiguration:(id)arg1;
- (id)sizesToAutogenerateForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2;
- (id)supportedSizesForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2;

@end
