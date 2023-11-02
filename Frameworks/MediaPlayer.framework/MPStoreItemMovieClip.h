
@interface MPStoreItemMovieClip : NSObject {
    NSDictionary * _lookupDictionary;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly, copy) NSDictionary *lookupDictionary;
@property (nonatomic, readonly, copy) MPStoreArtworkRequestToken *previewArtworkRequestToken;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)assets;
- (id)initWithLookupDictionary:(id)arg1;
- (id)lookupDictionary;
- (id)previewArtworkRequestToken;
- (id)title;

@end
