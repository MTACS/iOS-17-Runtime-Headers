
@interface WLKVideo : NSObject {
    NSString * _ID;
    WLKVideoAsset * _asset;
    unsigned long long  _duration;
    NSString * _externalID;
    WLKArtworkVariantListing * _images;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly) WLKVideoAsset *asset;
@property (nonatomic, readonly) unsigned long long duration;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (nonatomic, readonly) WLKArtworkVariantListing *images;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)videosWithDictionaries:(id)arg1;

- (void).cxx_destruct;
- (id)ID;
- (id)asset;
- (unsigned long long)duration;
- (id)externalID;
- (id)images;
- (id)initWithDictionary:(id)arg1;
- (id)title;

@end
