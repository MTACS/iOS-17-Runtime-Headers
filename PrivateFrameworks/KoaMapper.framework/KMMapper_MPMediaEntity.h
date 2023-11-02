
@interface KMMapper_MPMediaEntity : NSObject <KMMapper> {
    KVItemBuilder * _builder;
    NSMutableArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)externalObjectClass;

- (void).cxx_destruct;
- (bool)_addItemWithItemId:(id)arg1 itemIdType:(long long)arg2 fields:(id)arg3 error:(id*)arg4;
- (bool)_itemsFromMediaItem:(id)arg1 error:(id*)arg2;
- (bool)_itemsFromMediaPlaylist:(id)arg1 error:(id*)arg2;
- (bool)_mapAudioBookItem:(id)arg1 error:(id*)arg2;
- (bool)_mapMovieItem:(id)arg1 error:(id*)arg2;
- (bool)_mapMusicItem:(id)arg1 error:(id*)arg2;
- (bool)_mapMusicVideoItem:(id)arg1 error:(id*)arg2;
- (bool)_mapPodcastItem:(id)arg1 error:(id*)arg2;
- (bool)_mapTVShowItem:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id*)arg3;
- (long long)targetItemType;

@end
