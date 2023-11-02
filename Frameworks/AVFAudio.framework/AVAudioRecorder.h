
@interface AVAudioRecorder : NSObject <AVAudioSessionParticipant> {
    void * _impl;
}

@property (retain) AVAudioSession *audioSession;
@property (nonatomic, copy) NSArray *channelAssignments;
@property (readonly) double currentTime;
@property <AVAudioRecorderDelegate> *delegate;
@property (readonly) double deviceCurrentTime;
@property (readonly) AVAudioFormat *format;
@property (nonatomic) bool instantaneousMetering;
@property (getter=isMeteringEnabled) bool meteringEnabled;
@property (nonatomic) int processToTap;
@property (getter=isRecording, readonly) bool recording;
@property (readonly) NSDictionary *settings;
@property (readonly) NSURL *url;

- (id)audioSession;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (id)baseInit;
- (void)beginInterruption;
- (id)channelAssignments;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (bool)deleteRecording;
- (double)deviceCurrentTime;
- (void)endInterruption;
- (void)endInterruptionWithFlags;
- (void)finalize;
- (void)finishedRecording;
- (id)format;
- (void)handleInterruption:(id)arg1;
- (struct AudioRecorderImpl { id x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned int x8; struct AudioStreamBasicDescription { double x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; unsigned int x_9_1_6; unsigned int x_9_1_7; unsigned int x_9_1_8; unsigned int x_9_1_9; } x9; struct OpaqueAudioFileID {} *x10; struct OpaqueAudioQueue {} *x11; long long x12; long long x13; long long x14; double x15; double x16; double x17; unsigned long long x18; char *x19; bool x20; bool x21; bool x22; bool x23; bool x24; bool x25; bool x26; bool x27; struct AudioQueueLevelMeterState {} *x28; struct AudioQueueBuffer {} *x29[4]; struct AudioQueueBuffer {} *x30; bool x31; unsigned long long x32; bool x33; int x34; id x35; }*)impl;
- (id)init;
- (id)initWithURL:(id)arg1 format:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (bool)instantaneousMetering;
- (bool)isMeteringEnabled;
- (bool)isRecording;
- (void)pause;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (bool)prepareToRecord;
- (void)privCommonCleanup;
- (void)privRemoveSessionPropertyListeners;
- (int)processToTap;
- (bool)record;
- (bool)recordAtTime:(double)arg1;
- (bool)recordAtTime:(double)arg1 forDuration:(double)arg2;
- (bool)recordForDuration:(double)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setChannelAssignments:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstantaneousMetering:(bool)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (void)setProcessToTap:(int)arg1;
- (id)settings;
- (void)stop;
- (void)updateMeters;
- (id)url;

@end
