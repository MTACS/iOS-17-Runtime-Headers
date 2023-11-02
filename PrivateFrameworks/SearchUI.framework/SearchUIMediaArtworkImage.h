
@interface SearchUIMediaArtworkImage : SearchUIImage {
    long long  _mediaEntityType;
    NSString * _persistentID;
    NSString * _spotlightIdentifier;
    NSString * _universalLibraryID;
}

@property long long mediaEntityType;
@property (retain) NSString *persistentID;
@property (retain) NSString *spotlightIdentifier;
@property (retain) NSString *universalLibraryID;

- (void).cxx_destruct;
- (Class)classForCoder;
- (id)initWithSFImage:(id)arg1;
- (id)initWithSpotlightIdentifier:(id)arg1;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;
- (long long)mediaEntityType;
- (id)persistentID;
- (void)setMediaEntityType:(long long)arg1;
- (void)setPersistentID:(id)arg1;
- (void)setSpotlightIdentifier:(id)arg1;
- (void)setUniversalLibraryID:(id)arg1;
- (id)spotlightIdentifier;
- (id)universalLibraryID;

@end
