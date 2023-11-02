
@interface PXAudioSession : PXObservable <PXAudioSessionState, PXInternalMutableAudioSession> {
    <PXAudioAsset> * _asset;
    <PXAudioSessionAVAudioSessionDelegate> * _audioSessionDelegate;
    NSNumber * _contentLoudnessInLKFS;
    NSNumber * _contentPeakDecibels;
    float  _desiredPlayerVolume;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSError * _error;
    bool  _isReadyToPlay;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
    long long  _status;
    float  _targetLoudnessInLKFS;
    PXUpdater * _updater;
    float  _volume;
}

@property (nonatomic, readonly) <PXAudioAsset> *asset;
@property (nonatomic) <PXAudioSessionAVAudioSessionDelegate> *audioSessionDelegate;
@property (nonatomic, readonly) NSNumber *contentLoudnessInLKFS;
@property (nonatomic, readonly) NSNumber *contentPeakDecibels;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float desiredPlayerVolume;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isReadyToPlay;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;
@property (nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic) float targetLoudnessInLKFS;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (void)_invalidateDesiredPlayerVolume;
- (void)_updateDesiredPlayerVolume;
- (id)asset;
- (id)audioSessionDelegate;
- (id)contentLoudnessInLKFS;
- (id)contentPeakDecibels;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (id)description;
- (float)desiredPlayerVolume;
- (void)desiredPlayerVolumeDidChange;
- (void)didPerformChanges;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)error;
- (void)errorDidChange;
- (id)init;
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5;
- (bool)isReadyToPlay;
- (id)mutableChangeObject;
- (void)pause;
- (void)performChanges:(id /* block */)arg1;
- (void)performFinalCleanup;
- (void)performInternalChanges:(id /* block */)arg1;
- (void)play;
- (void)playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)prepareToPlay;
- (id)queue;
- (void)setAudioSessionDelegate:(id)arg1;
- (void)setContentLoudnessInLKFS:(id)arg1;
- (void)setContentPeakDecibels:(id)arg1;
- (void)setDesiredPlayerVolume:(float)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setError:(id)arg1;
- (void)setIsReadyToPlay:(bool)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTargetLoudnessInLKFS:(float)arg1;
- (void)setVolume:(float)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;
- (id)state;
- (long long)status;
- (void)statusDidChange;
- (float)targetLoudnessInLKFS;
- (float)volume;

@end
