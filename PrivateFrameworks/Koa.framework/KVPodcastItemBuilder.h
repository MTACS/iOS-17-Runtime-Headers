
@interface KVPodcastItemBuilder : NSObject {
    KVItemBuilder * _builder;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)_buildItemWithError:(id*)arg1;
- (id)init;
- (id)playlistItemWithName:(id)arg1 itemId:(id)arg2 error:(id*)arg3;
- (id)podcastItemWithTitle:(id)arg1 itemId:(id)arg2 artistName:(id)arg3 error:(id*)arg4;

@end
