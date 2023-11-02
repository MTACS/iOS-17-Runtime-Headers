
@interface RPAppAudioCaptureManager : NSObject {
    id /* block */  _appAudioOutputHandler;
    id /* block */  _appTapDidStartHandler;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _audioBasicDescription;
    NSObject<OS_dispatch_queue> * _audioDispatchQueue;
    struct { struct OpaqueAudioQueue {} *x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; struct AudioQueueBuffer {} *x3[10]; struct OpaqueAudioFileID {} *x4; unsigned int x5; long long x6; int x7; } * _audioRecorderQueue;
    NSDate * _lastAudioDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastAudioPresentationTime;
    bool  _resumed;
}

+ (struct { unsigned int x1; int x2; id x3; })audioCaptureConfigForSystemRecording:(bool)arg1 processID:(int)arg2 contextID:(id)arg3;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioStreamBasicDescriptionWithStereo:(bool)arg1;

- (void).cxx_destruct;
- (bool)handleStartAudioQueueFailed:(int)arg1 didFailHandler:(id /* block */)arg2;
- (id)init;
- (id)newAudioTapForAudioCaptureConfig:(struct { unsigned int x1; int x2; id x3; })arg1;
- (void)resumeWithConfig:(struct { unsigned int x1; int x2; id x3; })arg1;
- (void)startWithConfig:(struct { unsigned int x1; int x2; id x3; })arg1 outputHandler:(id /* block */)arg2 didStartHandler:(id /* block */)arg3;
- (void)stop;

@end
