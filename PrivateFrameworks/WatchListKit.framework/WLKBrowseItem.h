
@interface WLKBrowseItem : NSObject {
    WLKBasicContentMetadata * _content;
    WLKComingSoonInfo * _contentComingSoonInfo;
    WLKBrowseItem * _currentEpisode;
    NSArray * _playables;
    bool  _watchlistable;
    bool  _watchlisted;
}

@property (nonatomic, readonly) WLKBasicContentMetadata *content;
@property (nonatomic, retain) WLKComingSoonInfo *contentComingSoonInfo;
@property (nonatomic, readonly) WLKBrowseItem *currentEpisode;
@property (nonatomic, readonly) NSArray *playables;
@property (getter=isWatchlistable, nonatomic, readonly) bool watchlistable;
@property (getter=isWatchlisted, nonatomic, readonly) bool watchlisted;

+ (id)browseItemsWithDictionaries:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)content;
- (id)contentComingSoonInfo;
- (id)currentEpisode;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (bool)isWatchlistable;
- (bool)isWatchlisted;
- (id)playables;
- (id)preferredComingSoonInfo;
- (void)setContentComingSoonInfo:(id)arg1;

@end
