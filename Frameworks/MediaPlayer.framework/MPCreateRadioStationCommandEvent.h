
@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent {
    NSNumber * _privateListeningOverride;
    bool  _requestingPlaybackInitialization;
    NSURL * _stationURL;
}

@property (nonatomic, readonly) NSNumber *privateListeningOverride;
@property (getter=isRequestingPlaybackInitialization, nonatomic, readonly) bool requestingPlaybackInitialization;
@property (nonatomic, readonly) NSURL *stationURL;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)isRequestingPlaybackInitialization;
- (id)privateListeningOverride;
- (id)stationURL;

@end
