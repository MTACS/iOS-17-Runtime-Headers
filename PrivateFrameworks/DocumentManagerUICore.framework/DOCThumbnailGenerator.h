
@interface DOCThumbnailGenerator : NSObject {
    DOCThumbnailCache * _thumbnailCache;
    QLThumbnailGenerator * _thumbnailGenerator;
}

@property (nonatomic, readonly) QLThumbnailGenerator *thumbnailGenerator;

+ (void)setMaximumCachedThumbnailCount:(unsigned long long)arg1;
+ (id)sharedGenerator;

- (void).cxx_destruct;
- (id)_alternateThumbnailKeyForNode:(id)arg1 descriptor:(id)arg2;
- (id)_currentNodeThumbnailsBatch;
- (id)_endCurrentThumbnailsBatch;
- (id)_thumbnailFallbackForNode:(id)arg1 descriptor:(id)arg2 currentThumbnail:(id)arg3;
- (id)_thumbnailForNode:(id)arg1 descriptor:(id)arg2 forceFetch:(bool)arg3;
- (void)endBatching:(id)arg1;
- (id)iconForNode:(id)arg1 descriptor:(id)arg2;
- (id)iconForURL:(id)arg1 descriptor:(id)arg2;
- (id)init;
- (void)markThumbnailAsRecentlyUsed:(id)arg1;
- (void)performInBatch:(id /* block */)arg1;
- (id)startBatching;
- (id)thumbnailForNode:(id)arg1 descriptor:(id)arg2;
- (id)thumbnailForNode:(id)arg1 descriptor:(id)arg2 forceFetch:(bool)arg3;
- (id)thumbnailGenerator;

@end
