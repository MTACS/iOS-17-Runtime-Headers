
@interface CBRampManager : NSObject {
    bool  _activated;
    id /* block */  _clockHandler;
    NSObject<OS_dispatch_source> * _clockTimer;
    unsigned long long  _displayId;
    bool  _enableFrameSynchronisation;
    CBFrameLink * _frameLink;
    bool  _liveUpdates;
    NSObject<OS_os_log> * _logHandle;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _rampDoneCallback;
    NSMutableDictionary * _ramps;
    float  _requiredFrequency;
    double  _sMachTimebaseFactor;
}

@property (copy) id /* block */ clockHandler;
@property (nonatomic, readonly) bool enableFrameSynchronisation;
@property bool liveUpdates;
@property (copy) id /* block */ rampDoneCallback;

+ (id)className;

- (void)activate;
- (void)cancel;
- (id /* block */)clockHandler;
- (id)copyStatusInfo;
- (void)dealloc;
- (void)disableClocking;
- (void)enableClocking;
- (bool)enableFrameSynchronisation;
- (void)generateRamp;
- (bool)hasAnyActiveRamp;
- (bool)hasRampRunningForIdentifier:(id)arg1;
- (id)init;
- (id)initWithDisplayId:(unsigned long long)arg1;
- (id)insertNewLinearRampOrigin:(float)arg1 target:(float)arg2 length:(float)arg3 frequency:(float)arg4 identifier:(id)arg5;
- (id)insertNewLinearRampOrigin:(float)arg1 target:(float)arg2 length:(float)arg3 frequency:(float)arg4 startRamp:(bool)arg5 identifier:(id)arg6;
- (id)insertNewRampOrigin:(float)arg1 target:(float)arg2 length:(float)arg3 frequency:(float)arg4 identifier:(id)arg5 progressCallback:(id /* block */)arg6;
- (id)insertNewRampOrigin:(float)arg1 target:(float)arg2 length:(float)arg3 frequency:(float)arg4 startRamp:(bool)arg5 identifier:(id)arg6 progressCallback:(id /* block */)arg7;
- (void)insertRamp:(id)arg1 identifier:(id)arg2;
- (void)insertRamp:(id)arg1 identifier:(id)arg2 reevaluate:(bool)arg3;
- (bool)liveUpdates;
- (id /* block */)rampDoneCallback;
- (id)rampForIdentifier:(id)arg1;
- (void)reevaluateClocking;
- (float)remainingLength;
- (void)removeAllRamps;
- (void)removeRampWithIdentifier:(id)arg1;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)setClockHandler:(id /* block */)arg1;
- (void)setLiveUpdates:(bool)arg1;
- (void)setRampDoneCallback:(id /* block */)arg1;
- (void)setTimer;
- (void)startRamps;
- (void)stopTimer;
- (void)timerClockHandler;
- (void)updateRampsForTimestamp:(double)arg1;

@end
