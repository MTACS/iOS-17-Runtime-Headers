
@interface BLSHFlipbookRenderSessionTelemetryData : NSObject {
    double  _accumulatedLayoutDuration;
    double  _accumulatedRenderDuration;
    bool  _didFailToRender;
    NSArray * _environmentIdentifiers;
    double  _preventedSleepDuration;
    NSString * _reasonEnded;
    BLSHFlipbookFramesHistogram * _sessionFramesHistogram;
    unsigned int  _timedOutEnvironmentCount;
    double  _timestamp;
    double  _totalPreparationDuration;
}

@property (nonatomic, readonly) double accumulatedLayoutDuration;
@property (nonatomic, readonly) double accumulatedRenderDuration;
@property (nonatomic, readonly) bool didFailToRender;
@property (nonatomic, readonly) unsigned int environmentCount;
@property (nonatomic, readonly) NSArray *environmentIdentifiers;
@property (nonatomic, readonly) NSString *firstEnvironmentIdentifier;
@property (nonatomic, readonly) bool preventedSleep;
@property (nonatomic, readonly) double preventedSleepDuration;
@property (nonatomic, readonly) NSString *reasonEnded;
@property (nonatomic, readonly) BLSHFlipbookFramesHistogram *sessionFramesHistogram;
@property (nonatomic, readonly) unsigned int timedOutEnvironmentCount;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) double totalPreparationDuration;

- (void).cxx_destruct;
- (double)accumulatedLayoutDuration;
- (double)accumulatedRenderDuration;
- (id)description;
- (bool)didFailToRender;
- (unsigned int)environmentCount;
- (id)environmentIdentifiers;
- (id)firstEnvironmentIdentifier;
- (id)initWithTimestamp:(double)arg1 environmentIdentifiers:(id)arg2 reasonEnded:(id)arg3 sessionFramesHistogram:(id)arg4 totalPreparationDuration:(double)arg5 accumulatedLayoutDuration:(double)arg6 accumulatedRenderDuration:(double)arg7 preventedSleepDuration:(double)arg8 didFailToRender:(bool)arg9 timedOutEnvironmentCount:(unsigned int)arg10;
- (bool)preventedSleep;
- (double)preventedSleepDuration;
- (id)reasonEnded;
- (id)sessionFramesHistogram;
- (unsigned int)timedOutEnvironmentCount;
- (double)timestamp;
- (double)totalPreparationDuration;

@end
