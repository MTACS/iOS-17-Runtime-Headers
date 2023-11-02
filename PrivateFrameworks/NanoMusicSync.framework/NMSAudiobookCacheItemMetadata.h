
@interface NMSAudiobookCacheItemMetadata : NSObject {
    double  _cachedDuration;
    double  _cachedStartTime;
}

@property (nonatomic) double cachedDuration;
@property (nonatomic) double cachedStartTime;

+ (id)metaDataForMediaItem:(id)arg1;

- (id)_baseDirectoryForMediaItem:(id)arg1;
- (bool)_loadForMediaItem:(id)arg1;
- (double)cachedDuration;
- (double)cachedStartTime;
- (void)setCachedDuration:(double)arg1;
- (void)setCachedStartTime:(double)arg1;

@end
