
@interface WLKMovieClip : NSObject {
    NSArray * _assets;
    NSString * _hlsUrl;
    WLKMovieClipPreviewArtwork * _previewArtwork;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly, copy) NSString *hlsUrl;
@property (nonatomic, readonly) WLKMovieClipAsset *preferredAsset;
@property (nonatomic, readonly) WLKMovieClipPreviewArtwork *previewArtwork;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)movieClipsWithArray:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)assets;
- (id)hlsUrl;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)preferredAsset;
- (id)preferredURL;
- (id)previewArtwork;
- (id)title;

@end
