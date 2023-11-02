
@interface JEMediaActivityTracker : NSObject {
    NSMutableArray * _eventData;
    NSObject * _pipeline;
    JEMediaActivity * _playActivity;
    <JEMediaPlaylist> * _playlist;
    JEMediaActivity * _seekActivity;
    bool  _shouldGenerateTransitions;
    JEMediaTimeTracker * _timeTracker;
    NSString * _topic;
}

@property (nonatomic, retain) NSMutableArray *eventData;
@property (nonatomic, retain) NSObject *pipeline;
@property (nonatomic, retain) JEMediaActivity *playActivity;
@property (nonatomic, retain) <JEMediaPlaylist> *playlist;
@property (nonatomic, retain) JEMediaActivity *seekActivity;
@property (nonatomic) bool shouldGenerateTransitions;
@property (nonatomic, retain) JEMediaTimeTracker *timeTracker;
@property (nonatomic, retain) NSString *topic;

+ (id /* block */)playlistItemComparator;

- (void).cxx_destruct;
- (id)combineEventData:(id)arg1 withPlaylistDataForItem:(id)arg2;
- (id)eventData;
- (void)generatePlaylistTransitionsIfNecessary:(unsigned long long)arg1;
- (id)initWithPipeline:(id)arg1 playlist:(id)arg2 eventData:(id)arg3 topic:(id)arg4;
- (id)pipeline;
- (id)playActivity;
- (void)playStartedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStartedWithPlaybackRate:(float)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)playStoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playTransitionedAtOverallPosition:(unsigned long long)arg1 eventData:(id)arg2;
- (id)playlist;
- (void)resetEventData:(id)arg1;
- (id)seekActivity;
- (void)seekStartedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)seekStoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)setEventData:(id)arg1;
- (void)setPipeline:(id)arg1;
- (void)setPlayActivity:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setSeekActivity:(id)arg1;
- (void)setShouldGenerateTransitions:(bool)arg1;
- (void)setTimeTracker:(id)arg1;
- (void)setTopic:(id)arg1;
- (bool)shouldGenerateTransitions;
- (id)startActivity:(long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5 transitioningEventData:(id)arg6;
- (void)stopActivity:(long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5 transitioningEventData:(id)arg6;
- (void)synchronizeAtOverallPosition:(unsigned long long)arg1;
- (void)synchronizePlaybackRate:(float)arg1 overallPosition:(unsigned long long)arg2;
- (id)timeTracker;
- (id)topic;
- (void)updateEventData:(id)arg1;

@end
