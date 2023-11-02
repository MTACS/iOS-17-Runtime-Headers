
@interface ALAssetsFilter : NSObject {
    id  _internal;
}

@property (nonatomic, retain) ALAssetsFilterInternal *internal;

+ (id)allAssets;
+ (id)allPhotos;
+ (id)allVideos;

- (int)_filter;
- (void)_setFilter:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)internal;
- (void)setInternal:(id)arg1;

@end
