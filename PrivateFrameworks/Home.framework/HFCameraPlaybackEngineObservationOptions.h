
@interface HFCameraPlaybackEngineObservationOptions : NSObject {
    NSNumber * _periodicTimeUpdateInterval;
}

@property (nonatomic, copy) NSNumber *periodicTimeUpdateInterval;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)periodicTimeUpdateInterval;
- (void)setPeriodicTimeUpdateInterval:(id)arg1;

@end
