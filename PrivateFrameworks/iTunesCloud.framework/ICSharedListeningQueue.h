
@interface ICSharedListeningQueue : NSObject <NSCopying> {
    long long  _explicitContentState;
    NSString * _identifier;
    ICLiveLink * _liveLink;
    _ICLLPlaybackControlSettings * _playbackControlSettings;
    NSString * _serverQueueContext;
    long long  _serverRevision;
    MSVSectionedCollection * _tracklist;
}

@property (nonatomic, readonly) long long explicitContentState;
@property (nonatomic, readonly) bool hasActiveRadioStation;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isAutoPlayAvailable;
@property (nonatomic, readonly) bool isAutoPlayEnabled;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) ICLiveLink *liveLink;
@property (nonatomic, readonly) _ICLLPlaybackControlSettings *playbackControlSettings;
@property (nonatomic, readonly, copy) NSString *serverQueueContext;
@property (nonatomic, readonly) long long serverRevision;
@property (nonatomic, readonly, copy) MSVSectionedCollection *tracklist;

- (void).cxx_destruct;
- (long long)_afterItemPositionForItemIdentifier:(id)arg1;
- (void)_detectTrackGenerationSourceForTracklist:(id)arg1 detectedCompletion:(id /* block */)arg2;
- (id)_itemForIdentifier:(id)arg1 outIndexPath:(id*)arg2;
- (id)_playbackItemProtosForTracklist:(id)arg1 withPreferredStartItemIndexPath:(id)arg2;
- (id)_tracklistForQueueProto:(id)arg1;
- (void)addMediaIdentifiers:(id)arg1 afterItemIdentifier:(id)arg2;
- (id)containerForIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)explicitContentState;
- (void)getExpectedCurrentItemWithCompletion:(id /* block */)arg1;
- (bool)hasActiveRadioStation;
- (id)identifier;
- (id)initWithProtobuf:(id)arg1 serverQueueContext:(id)arg2 liveLink:(id)arg3 playbackControlSettings:(id)arg4;
- (void)insertTracklist:(id)arg1 afterItemIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)insertTracklist:(id)arg1 afterItemIdentifier:(id)arg2 playNowWithPreferredStartIndexPath:(id)arg3 completion:(id /* block */)arg4;
- (void)insertTracklist:(id)arg1 afterItemIdentifier:(id)arg2 playNowWithPreferredStartIndexPath:(id)arg3 completionEx:(id /* block */)arg4;
- (void)insertTracklist:(id)arg1 atPosition:(id)arg2 completion:(id /* block */)arg3;
- (void)insertTracklist:(id)arg1 atPosition:(id)arg2 completionEx:(id /* block */)arg3;
- (bool)isAutoPlayAvailable;
- (bool)isAutoPlayEnabled;
- (id)itemForIdentifier:(id)arg1;
- (id)items;
- (id)liveLink;
- (void)moveItemIdentifier:(id)arg1 afterItemIdentifier:(id)arg2;
- (void)moveItemIdentifier:(id)arg1 beforeItemIdentifier:(id)arg2;
- (id)playbackControlSettings;
- (void)removeAllItemIdentifiersAfterItemIdentifier:(id)arg1;
- (void)removeItemIdentifier:(id)arg1;
- (void)removeItemIdentifiers:(id)arg1;
- (void)replaceTracklist:(id)arg1 preferredStartIndexPath:(id)arg2 completion:(id /* block */)arg3;
- (id)serverQueueContext;
- (long long)serverRevision;
- (void)setAutoPlayEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setLiveLink:(id)arg1;
- (id)tracklist;

@end
