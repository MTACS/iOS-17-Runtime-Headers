
@interface BWFrameRateGovernorNode : BWNode {
    int  _activeBracketSequenceRate;
    bool  _aeStableAfterStartStreaming;
    int  _aeStableTimeoutFrameCount;
    bool  _dropsStartupFramesWithUnstableAE;
    bool  _dropsStillBracketFramesToMaintainConsistentFrameRate;
    long long  _frameCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastEmittedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastEmittedStreamingFrameDuration;
    int  _ltmStableTimeoutFrameCount;
    BWMotionDataPreserver * _motionDataPreserver;
    int  _numFramesSinceAEBecameStable;
    bool  _preservesMotionDataFromDroppedFrames;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (bool)dropsStartupFramesWithUnstableAE;
- (bool)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (id)init;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (bool)preservesMotionDataFromDroppedFrames;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDropsStartupFramesWithUnstableAE:(bool)arg1;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(bool)arg1;
- (void)setPreservesMotionDataFromDroppedFrames:(bool)arg1;

@end
