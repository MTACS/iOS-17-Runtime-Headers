
@interface MPCModelRadioPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming> {
    long long  _continueListeningMaxQueueReferences;
    long long  _continueListeningPrefetchThreshold;
    <MPCContinueListeningRadioQueueProviding> * _continueListeningQueueProvider;
    bool  _continueListeningStation;
    MPCModelRadioContentReference * _nowPlayingContentReference;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    MPModelRadioStation * _radioStation;
    MPCModelRadioContentReference * _seedContentReference;
    NSString * _stationPlaybackAuthorizationToken;
    NSURL * _stationURL;
}

@property (nonatomic) long long continueListeningMaxQueueReferences;
@property (nonatomic) long long continueListeningPrefetchThreshold;
@property (nonatomic) <MPCContinueListeningRadioQueueProviding> *continueListeningQueueProvider;
@property (nonatomic) bool continueListeningStation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MPCModelRadioContentReference *nowPlayingContentReference;
@property (nonatomic, copy) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, copy) MPCModelRadioContentReference *seedContentReference;
@property (nonatomic, copy) NSString *stationPlaybackAuthorizationToken;
@property (nonatomic, copy) NSURL *stationURL;
@property (readonly) Class superclass;

+ (Class)queueFeederClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)continueListeningMaxQueueReferences;
- (long long)continueListeningPrefetchThreshold;
- (id)continueListeningQueueProvider;
- (bool)continueListeningStation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)arg1;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)nowPlayingContentReference;
- (id)playbackRequestEnvironment;
- (long long)queueEndAction;
- (id)radioStation;
- (long long)repeatType;
- (id)seedContentReference;
- (void)setContinueListeningMaxQueueReferences:(long long)arg1;
- (void)setContinueListeningPrefetchThreshold:(long long)arg1;
- (void)setContinueListeningQueueProvider:(id)arg1;
- (void)setContinueListeningStation:(bool)arg1;
- (void)setNowPlayingContentReference:(id)arg1;
- (void)setPlaybackRequestEnvironment:(id)arg1;
- (void)setRadioStation:(id)arg1;
- (void)setSeedContentReference:(id)arg1;
- (void)setStationPlaybackAuthorizationToken:(id)arg1;
- (void)setStationURL:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (long long)shuffleType;
- (id)stationPlaybackAuthorizationToken;
- (id)stationURL;
- (id)userIdentity;

@end
