
@interface MRNowPlayingControllerConfiguration : NSObject <NSCopying> {
    MRDestination * _destination;
    id /* block */  _discoveryPredicate;
    NSString * _label;
    MRPlaybackQueueRequest * _playbackQueueRequest;
    bool  _requestClientProperties;
    bool  _requestLastPlayingDate;
    bool  _requestPlaybackQueue;
    bool  _requestPlaybackState;
    bool  _requestSupportedCommands;
    bool  _singleShot;
    bool  _wantsChangeCallbacksDuringInitialLoad;
}

@property (nonatomic, copy) MRDestination *destination;
@property (nonatomic, copy) id /* block */ discoveryPredicate;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) MRPlaybackQueueRequest *playbackQueueRequest;
@property (nonatomic) bool requestClientProperties;
@property (nonatomic) bool requestLastPlayingDate;
@property (nonatomic) bool requestPlaybackQueue;
@property (nonatomic) bool requestPlaybackState;
@property (nonatomic) bool requestSupportedCommands;
@property (getter=isSingleShot, nonatomic) bool singleShot;
@property (nonatomic) bool wantsChangeCallbacksDuringInitialLoad;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)destination;
- (id /* block */)discoveryPredicate;
- (id)initWithDestination:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithOrigin:(id)arg1;
- (id)initWithOutputDeviceUID:(id)arg1;
- (bool)isSingleShot;
- (id)label;
- (id)playbackQueueRequest;
- (bool)requestClientProperties;
- (bool)requestLastPlayingDate;
- (bool)requestPlaybackQueue;
- (bool)requestPlaybackState;
- (bool)requestSupportedCommands;
- (void)setDestination:(id)arg1;
- (void)setDiscoveryPredicate:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPlaybackQueueRequest:(id)arg1;
- (void)setRequestClientProperties:(bool)arg1;
- (void)setRequestLastPlayingDate:(bool)arg1;
- (void)setRequestPlaybackQueue:(bool)arg1;
- (void)setRequestPlaybackState:(bool)arg1;
- (void)setRequestSupportedCommands:(bool)arg1;
- (void)setSingleShot:(bool)arg1;
- (void)setWantsChangeCallbacksDuringInitialLoad:(bool)arg1;
- (bool)wantsChangeCallbacksDuringInitialLoad;

@end
