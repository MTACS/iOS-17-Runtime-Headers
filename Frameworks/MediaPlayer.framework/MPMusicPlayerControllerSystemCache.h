
@interface MPMusicPlayerControllerSystemCache : NSObject {
    NSUserDefaults * _defaults;
}

@property (nonatomic, readonly) bool hasCachedData;
@property (nonatomic, retain) MPMusicPlayerControllerNowPlaying *nowPlaying;
@property (nonatomic, retain) MPMusicPlayerQueueDescriptor *queueDescriptor;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (id)_objectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)_saveObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)clearCache;
- (bool)hasCachedData;
- (id)nowPlaying;
- (id)queueDescriptor;
- (void)setNowPlaying:(id)arg1;
- (void)setQueueDescriptor:(id)arg1;

@end
