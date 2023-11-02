
@interface VUIActionPlay : VUIAction {
    VUIAppContext * _appContext;
    NSDictionary * _contextData;
    bool  _isRentAndWatchNow;
    MPMediaItem * _mpMediaItem;
    NSArray * _multiviewPlayables;
    NSDate * _openURLCompletionDate;
    bool  _playRequiresAccount;
    unsigned long long  _playbackContext;
    NSString * _sidebandLibraryAdamID;
    bool  _upNextPlayback;
    NSDate * _userPlaybackInitiationDate;
    NSArray * _videosPlayables;
    long long  _watchType;
}

@property (nonatomic) VUIAppContext *appContext;
@property (nonatomic, retain) NSDictionary *contextData;
@property (nonatomic) bool isRentAndWatchNow;
@property (nonatomic, retain) MPMediaItem *mpMediaItem;
@property (nonatomic, readonly) NSArray *multiviewPlayables;
@property (nonatomic, retain) NSDate *openURLCompletionDate;
@property (nonatomic) bool playRequiresAccount;
@property (nonatomic, readonly) NSString *playType;
@property (nonatomic) unsigned long long playbackContext;
@property (nonatomic, retain) NSString *sidebandLibraryAdamID;
@property (getter=isUpNextPlayback, nonatomic) bool upNextPlayback;
@property (nonatomic, retain) NSDate *userPlaybackInitiationDate;
@property (nonatomic, retain) NSArray *videosPlayables;
@property (nonatomic) long long watchType;

+ (id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)arg1;
+ (void)_playMediaInfo:(id)arg1 multiviewMediaInfos:(id)arg2 watchType:(long long)arg3 extrasInfo:(id)arg4 playType:(id)arg5 isRentAndWatchNow:(bool)arg6 completion:(id /* block */)arg7;
+ (void)_playPlayables:(id)arg1 multiviewPlayables:(id)arg2 appContext:(id)arg3 watchType:(long long)arg4 isUpNextPlayback:(bool)arg5 userPlaybackInitiationDate:(id)arg6 openURLCompletionDate:(id)arg7 playType:(id)arg8 playbackContext:(unsigned long long)arg9;
+ (void)_presentPlaybackWithMediaInfo:(id)arg1 multiviewMediaInfos:(id)arg2 extrasInfo:(id)arg3 isCoWatching:(bool)arg4 watchType:(long long)arg5 playType:(id)arg6 allowsCellular:(bool)arg7 previewMetadata:(id)arg8 completion:(id /* block */)arg9;
+ (void)playMediaInfo:(id)arg1 multiviewMediaInfos:(id)arg2 watchType:(long long)arg3 isRentAndWatchNow:(bool)arg4;
+ (void)playMediaInfo:(id)arg1 multiviewMediaInfos:(id)arg2 watchType:(long long)arg3 isRentAndWatchNow:(bool)arg4 completion:(id /* block */)arg5;
+ (void)playMediaInfo:(id)arg1 watchType:(long long)arg2 isRentAndWatchNow:(bool)arg3;
+ (void)playMediaInfo:(id)arg1 watchType:(long long)arg2 isRentAndWatchNow:(bool)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)appContext;
- (id)contextData;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (id)initWithMPMediaItem:(id)arg1 watchType:(long long)arg2 playbackContext:(unsigned long long)arg3 isRentAndWatchNow:(bool)arg4;
- (id)initWithSidebandAdamID:(id)arg1 watchType:(long long)arg2 playbackContext:(unsigned long long)arg3 isRentAndWatchNow:(bool)arg4;
- (id)initWithVideosPlayables:(id)arg1 watchType:(long long)arg2 playbackContext:(unsigned long long)arg3 isRentAndWatchNow:(bool)arg4;
- (bool)isAccountRequired;
- (bool)isRentAndWatchNow;
- (bool)isUpNextPlayback;
- (id)mpMediaItem;
- (id)multiviewPlayables;
- (id)openURLCompletionDate;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)playRequiresAccount;
- (id)playType;
- (unsigned long long)playbackContext;
- (void)setAppContext:(id)arg1;
- (void)setContextData:(id)arg1;
- (void)setIsRentAndWatchNow:(bool)arg1;
- (void)setMpMediaItem:(id)arg1;
- (void)setOpenURLCompletionDate:(id)arg1;
- (void)setPlayRequiresAccount:(bool)arg1;
- (void)setPlaybackContext:(unsigned long long)arg1;
- (void)setSidebandLibraryAdamID:(id)arg1;
- (void)setUpNextPlayback:(bool)arg1;
- (void)setUserPlaybackInitiationDate:(id)arg1;
- (void)setVideosPlayables:(id)arg1;
- (void)setWatchType:(long long)arg1;
- (id)sidebandLibraryAdamID;
- (id)userPlaybackInitiationDate;
- (id)videosPlayables;
- (long long)watchType;

@end
