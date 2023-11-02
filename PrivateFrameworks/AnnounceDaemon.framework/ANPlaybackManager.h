
@interface ANPlaybackManager : NSObject <ANTrackPlayerDelegate> {
    NSMutableOrderedSet * _announcementsToPlay;
    ANTrackPlayer * _audioPlayer;
    <ANPlaybackManagerDataSource> * _dataSource;
    <ANPlaybackManagerDelegate> * _delegate;
    NSUUID * _endpointID;
    long long  _lastAnnoucementIndex;
    NSObject<OS_os_log> * _log;
    id /* block */  _playbackCompletionHandler;
    NSMutableDictionary * _playbackInfo;
    unsigned long long  _playbackOptions;
    NSObject<OS_dispatch_queue> * _playbackQueue;
}

@property (nonatomic, retain) NSMutableOrderedSet *announcementsToPlay;
@property (nonatomic, retain) ANTrackPlayer *audioPlayer;
@property (nonatomic) <ANPlaybackManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANPlaybackManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *endpointID;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastAnnoucementIndex;
@property (readonly) NSDictionary *lastPlayedAnnouncementInfo;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, copy) id /* block */ playbackCompletionHandler;
@property (nonatomic, readonly) NSMutableDictionary *playbackInfo;
@property (readonly) unsigned long long playbackItemCount;
@property (nonatomic, readonly) unsigned long long playbackOptions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *playbackQueue;
@property (readonly) unsigned long long playbackState;
@property (readonly) Class superclass;

+ (id)managerWithEndpointID:(id)arg1;

- (void).cxx_destruct;
- (id)_announcementsForPlaybackOptions:(unsigned long long)arg1 fromAnnouncements:(id)arg2;
- (id)_createTrackPlayerWithAnnouncement:(id)arg1 options:(unsigned long long)arg2 anchorPoint:(unsigned long long*)arg3;
- (void)_handlePlaybackEndedForPlayer:(id)arg1 withError:(id)arg2;
- (id)_nextAnnouncementToPlay;
- (void)_nextAnnouncementWithCompletionHandler:(id /* block */)arg1;
- (bool)_playAnnouncements:(id)arg1 announceIDToStart:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)_playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_previousAnnouncementWithCompletionHandler:(id /* block */)arg1;
- (bool)_startPlayingAnnouncements;
- (void)_stopAudioPlayer;
- (void)_stopPlayingAnnouncementsWithCompletionHandler:(id /* block */)arg1;
- (void)_updatePlaybackInfoForAnnouncementID:(id)arg1 options:(unsigned long long)arg2 player:(id)arg3;
- (id)announcementsToPlay;
- (id)audioPlayer;
- (id)dataSource;
- (id)delegate;
- (id)endpointID;
- (id)initWithEndpointID:(id)arg1;
- (long long)lastAnnoucementIndex;
- (id)lastPlayedAnnouncementInfo;
- (id)log;
- (void)performPlaybackCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)playbackCompletionHandler;
- (id)playbackInfo;
- (unsigned long long)playbackItemCount;
- (unsigned long long)playbackOptions;
- (id)playbackQueue;
- (unsigned long long)playbackState;
- (void)setAnnouncementsToPlay:(id)arg1;
- (void)setAudioPlayer:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointID:(id)arg1;
- (void)setLastAnnoucementIndex:(long long)arg1;
- (void)setPlaybackCompletionHandler:(id /* block */)arg1;
- (void)trackPlayer:(id)arg1 didFinishPlayingTrackType:(long long)arg2 announcementID:(id)arg3 error:(id)arg4;
- (void)trackPlayer:(id)arg1 didUpdatePlaybackState:(unsigned long long)arg2 announcementID:(id)arg3;
- (void)updatePlaybackForAnnouncementID:(id)arg1 options:(unsigned long long)arg2;

@end
