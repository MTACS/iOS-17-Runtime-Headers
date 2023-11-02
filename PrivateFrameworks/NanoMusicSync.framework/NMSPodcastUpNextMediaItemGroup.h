
@interface NMSPodcastUpNextMediaItemGroup : NMSMediaItemGroup {
    NSArray * _upNextEpisodes;
    NSArray * _upNextFeedURLs;
}

- (void).cxx_destruct;
- (id)_upNextEpisodes;
- (id)_upNextFeedURLs;
- (id)identifiersForContainerType:(unsigned long long)arg1;
- (id)itemList;

@end
