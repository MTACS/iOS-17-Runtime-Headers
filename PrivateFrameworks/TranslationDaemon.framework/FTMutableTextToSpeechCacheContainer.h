
@interface FTMutableTextToSpeechCacheContainer : FTTextToSpeechCacheContainer

@property (nonatomic, copy) FTTextToSpeechCacheMetaInfo *cache_meta_info;
@property (nonatomic, copy) NSArray *cache_object;

- (id)cache_meta_info;
- (id)cache_object;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setCache_meta_info:(id)arg1;
- (void)setCache_object:(id)arg1;

@end
