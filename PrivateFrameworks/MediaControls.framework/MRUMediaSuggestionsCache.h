
@interface MRUMediaSuggestionsCache : NSObject {
    NSCache * _imageCache;
}

@property (nonatomic, retain) NSCache *imageCache;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)artworkForMediaSuggestion:(id)arg1;
- (id)imageCache;
- (id)init;
- (void)setImageCache:(id)arg1;

@end
