
@interface AVTRecordView : AVTView <AVTFaceTrackerDelegate> {
    bool  _audioIsRecording;
    NSLock * _audioLock;
    AVPlayer * _audioPlayer;
    AVAssetWriter * _audioWriter;
    AVAssetWriterInput * _audioWriterInput;
    CALayer * _backingLayer;
    int  _benchFrameCounter;
    bool  _checkDrawableAvailable;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentAudioTime;
    bool  _disableRendering;
    bool  _doubleBuffer;
    NSMutableArray * _droppedDoubleBufferFrames;
    bool  _exportingMovie;
    double  _lastAudioPlayerTime;
    double  _lastAudioSystemTime;
    float  _maxRecordingDuration;
    AVCaptureMovieFileOutput * _movieFileOutput;
    bool  _mute;
    bool  _playBakedAnimation;
    bool  _playing;
    long long  _preferredFramesPerSecond_thermal;
    long long  _preferredFramesPerSecond_user;
    NSMutableData * _rawBlendShapesData;
    NSMutableData * _rawParametersData;
    NSMutableData * _rawTimesData;
    NSMutableData * _rawTransformsData;
    <AVTRecordViewDelegate> * _recordDelegate;
    CAAnimationGroup * _recordedAnimationGroup;
    int  _recordedCount;
    long long  _recordedSampleCount;
    bool  _recording;
    int  _recordingCapacity;
    double  _recordingStartTime;
    double  _referenceAnimationBeginTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startAudioTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stopAudioTime;
    double  _t0;
    bool  _transitioningFromSnapshot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float maxRecordingDuration;
@property (nonatomic) bool mute;
@property (getter=isPreviewing, nonatomic, readonly) bool previewing;
@property (nonatomic) <AVTRecordViewDelegate> *recordDelegate;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (void)setUsesInternalTrackingPipeline:(bool)arg1;
+ (bool)usesInternalTrackingPipeline;

- (void).cxx_destruct;
- (void)_avt_commonInit;
- (void)_didLostTrackingForAWhile;
- (void)_didUpdateAtTime:(double)arg1;
- (void)_drawAtTime:(double)arg1;
- (void)_playLivePreviewAnimation;
- (void)_processInfoThermalStateDidChange:(id)arg1;
- (double)_renderer:(id)arg1 inputTimeForCurrentFrameWithTime:(double)arg2;
- (void)_renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)_setEffectivePreferredFramesPerSecond;
- (void)_smoothRecordedData;
- (id)_tmpAudioURL;
- (id)_tmpMaskVideoURL;
- (id)_tmpVideoURL;
- (void)_updateFrameRateForThermalState:(long long)arg1;
- (void)_updateTrackingState;
- (void)addRecordedAnimationToAvatar:(id)arg1;
- (bool)allowTrackSmoothing;
- (void)audioPlayerItemDidReachEnd:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)avatarDidChange;
- (void)cancelMovieExport;
- (void)cancelRecording;
- (void)cancelRecordingAudio;
- (void)convertRecordedDataToAnimationGroup;
- (struct opaqueCMSampleBuffer { }*)createSilentAudioAtFrame:(long long)arg1 nFrames:(int)arg2 sampleRate:(double)arg3 numChannels:(int)arg4;
- (double)currentAudioTime;
- (void)dealloc;
- (bool)disableRendering;
- (void)drawableNotAvailableForTime:(double)arg1;
- (bool)exportMovieToURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)faceIsFullyActive;
- (void)faceTracker:(id)arg1 session:(id)arg2 didFailWithError:(id)arg3;
- (void)faceTracker:(id)arg1 session:(id)arg2 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (void)faceTracker:(id)arg1 sessionInterruptionEnded:(id)arg2;
- (void)faceTracker:(id)arg1 sessionWasInterrupted:(id)arg2;
- (void)faceTrackerDidUpdate:(id)arg1 withARFrame:(id)arg2;
- (id)faceTrackingRecordingURL;
- (void)fadePuppetToWhite:(float)arg1;
- (double)finalVideoDuration;
- (void)finalizeAudioFile;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2;
- (bool)isDoubleBuffered;
- (bool)isPreviewing;
- (bool)isRecording;
- (float)maxRecordingDuration;
- (bool)mergeAudio:(id)arg1 andVideoTo:(id)arg2 error:(id*)arg3;
- (bool)mute;
- (bool)playBakedAnimation;
- (void)playPreviewOnce;
- (long long)preferredFramesPerSecond;
- (id)recordDelegate;
- (bool)recording;
- (double)recordingDuration;
- (void)removeRecordedAnimationFromAvatar:(id)arg1;
- (void)setAvatar:(id)arg1;
- (void)setDisableRendering:(bool)arg1;
- (void)setFaceTrackingPaused:(bool)arg1;
- (void)setFaceTrackingRecordingURL:(id)arg1;
- (void)setMaxRecordingDuration:(float)arg1;
- (void)setMute:(bool)arg1;
- (void)setPlayBakedAnimation:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setRecordDelegate:(id)arg1;
- (void)startPlayingAudio;
- (void)startPreviewing;
- (void)startRecording;
- (void)startRecordingAudio;
- (void)stopPlayingAudio;
- (void)stopPreviewing;
- (void)stopRecording;
- (void)stopRecordingAudio;
- (void)transitionToFaceTrackingWithDuration:(double)arg1 style:(unsigned long long)arg2 enableBakedAnimations:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)trimRecordedData;
- (void)updateAtTime:(double)arg1;
- (void)updateAudioState;
- (void)updateForChangedFaceTrackingPaused;
- (void)updateMuteState;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (void)downcastWithAVTViewHandler:(id /* block */)arg1 recordViewHandler:(id /* block */)arg2;

@end