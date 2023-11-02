
@interface VUIPlaybackStartupCoordinator : NSObject {
    NSString * _adamID;
    id /* block */  _completion;
    NSDictionary * _contentMetadata;
    bool  _forceDownloadToStream;
    bool  _isCellularAllowed;
    bool  _isRentAndWatchNow;
    VUIMediaInfo * _mediaInfo;
    NSString * _mediaType;
    VUIVideosPlayable * _resolvedPlayable;
    NSString * _showCanonicalID;
    TVPStateMachine * _stateMachine;
    NSString * _videoCanonicalID;
    long long  _watchType;
}

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) NSDictionary *contentMetadata;
@property (nonatomic) bool forceDownloadToStream;
@property (nonatomic) bool isCellularAllowed;
@property (nonatomic) bool isRentAndWatchNow;
@property (nonatomic, retain) VUIMediaInfo *mediaInfo;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, retain) VUIVideosPlayable *resolvedPlayable;
@property (nonatomic, copy) NSString *showCanonicalID;
@property (nonatomic, retain) TVPStateMachine *stateMachine;
@property (nonatomic, copy) NSString *videoCanonicalID;
@property (nonatomic) long long watchType;

+ (id)identifierForMediaInfo:(id)arg1;
+ (void)initialize;
+ (id)startupCoordinatorWithMediaInfo:(id)arg1 watchType:(long long)arg2 isRentAndWatchNow:(bool)arg3;
+ (id)startupCoordinators;

- (void).cxx_destruct;
- (void)_addGroupActivityDayParamToPlayableAndMediaItem:(id)arg1;
- (id)_addQueryParamsToSharedWatchURL:(id)arg1 watchType:(long long)arg2 groupActivityDay:(id)arg3;
- (void)_checkIfAllowedToPlayOnCellularNetworkWithMediaItem:(id)arg1 presentingController:(id)arg2 completion:(id /* block */)arg3;
- (id)_descriptionForStartupAction:(long long)arg1;
- (id)_descriptionForWatchType:(long long)arg1;
- (bool)_existingPlaybackSessionAllowsCellular;
- (bool)_mediaItemIsBeingDownloadedAndDownloadAllowsCellular:(id)arg1;
- (void)_performRatingAndAgeVerificationWithMediaItem:(id)arg1 presentingController:(id)arg2 completion:(id /* block */)arg3;
- (void)_preflightPlaybackWithPlaylist:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_registerStateMachineHandlers;
- (bool)_shouldPromptForExpiredDownload:(id)arg1;
- (bool)_shouldWarnAboutRentalPlaybackQualityForRentalMediaItem:(id)arg1;
- (bool)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg1;
- (void)_showAlertControllerForExpirationPromptForDownload:(id)arg1 presentingViewController:(id)arg2;
- (void)_showCellularPlaybackQualityOptionsForRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)adamID;
- (id /* block */)completion;
- (id)contentMetadata;
- (void)dealloc;
- (bool)forceDownloadToStream;
- (id)initWithAdamID:(id)arg1 watchType:(long long)arg2 isRentAndWatchNow:(bool)arg3;
- (id)initWithAdamID:(id)arg1 watchType:(long long)arg2 isRentAndWatchNow:(bool)arg3 contentMetadata:(id)arg4;
- (id)initWithCanonicalID:(id)arg1 showCanonicalID:(id)arg2 mediaType:(id)arg3 watchType:(long long)arg4 isRentAndWatchNow:(bool)arg5;
- (id)initWithCanonicalID:(id)arg1 showCanonicalID:(id)arg2 mediaType:(id)arg3 watchType:(long long)arg4 isRentAndWatchNow:(bool)arg5 contentMetadata:(id)arg6;
- (id)initWithMediaInfo:(id)arg1 watchType:(long long)arg2 isRentAndWatchNow:(bool)arg3;
- (bool)isCellularAllowed;
- (bool)isRentAndWatchNow;
- (id)mediaInfo;
- (id)mediaType;
- (void)performPlaybackStartupFlowWithCompletion:(id /* block */)arg1;
- (id)resolvedPlayable;
- (void)setAdamID:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setContentMetadata:(id)arg1;
- (void)setForceDownloadToStream:(bool)arg1;
- (void)setIsCellularAllowed:(bool)arg1;
- (void)setIsRentAndWatchNow:(bool)arg1;
- (void)setMediaInfo:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setResolvedPlayable:(id)arg1;
- (void)setShowCanonicalID:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setVideoCanonicalID:(id)arg1;
- (void)setWatchType:(long long)arg1;
- (id)showCanonicalID;
- (id)stateMachine;
- (id)videoCanonicalID;
- (long long)watchType;

@end
