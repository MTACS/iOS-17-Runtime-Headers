
@interface HFCameraPlaybackEngineObservationState : NSObject {
    HFCameraPlaybackEngineObservationOptions * _options;
    id  _timeObservationToken;
}

@property (nonatomic, retain) HFCameraPlaybackEngineObservationOptions *options;
@property (nonatomic, retain) id timeObservationToken;

- (void).cxx_destruct;
- (id)options;
- (void)setOptions:(id)arg1;
- (void)setTimeObservationToken:(id)arg1;
- (id)timeObservationToken;

@end
