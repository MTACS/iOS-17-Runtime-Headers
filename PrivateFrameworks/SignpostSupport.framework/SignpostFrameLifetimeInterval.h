
@interface SignpostFrameLifetimeInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata> {
    unsigned char  _bufferCount;
    NSArray * _commits;
    SignpostContextInfo * _contextInfoForHIDInput;
    unsigned long long  _displayRefreshIntervalDurationMachTime;
    SignpostContextInfo * _earliestTimeContextInfo;
    SignpostFrameLatencyInterval * _frameLatencyInterval;
    unsigned int  _frameSeed;
    bool  _frameStallSkipRequest;
    SignpostHIDLatencyInterval * _hidLatencyInterval;
    NSDictionary * _pidToContextInfoArrayDict;
    unsigned long long  _previousFramePresentationMCT;
    SignpostRenderServerRenderInterval * _renderInterval;
    NSArray * _skippedRenders;
    unsigned int  _swapID;
}

@property (nonatomic, readonly) unsigned char bufferCount;
@property (nonatomic, retain) NSArray *commits;
@property (nonatomic, readonly) SignpostContextInfo *contextInfoForHIDInput;
@property (nonatomic, readonly) NSSet *contributingPIDs;
@property (nonatomic, readonly) unsigned int displayID;
@property (nonatomic, readonly) NSNumber *displayIDNum;
@property (nonatomic, readonly) unsigned long long displayRefreshIntervalDurationMachTime;
@property (nonatomic, readonly) SignpostContextInfo *earliestTimeContextInfo;
@property (nonatomic, readonly) SignpostFrameLatencyInterval *frameLatencyInterval;
@property (nonatomic, readonly) bool frameLatencyIsLong;
@property (nonatomic, readonly) <SignpostSupportTimeInterval> *frameOverrunInactiveDisplayInterval;
@property (nonatomic, readonly) <SignpostSupportTimeInterval> *frameOverrunInterval;
@property (nonatomic, readonly) unsigned int frameSeed;
@property (nonatomic, readonly) bool frameStallSkipRequest;
@property (nonatomic, readonly) SignpostHIDLatencyInterval *hidLatencyInterval;
@property (nonatomic, readonly) bool hidLatencyIsLong;
@property (nonatomic, readonly) bool mayBeFirstFrame;
@property (nonatomic, readonly) unsigned long long missedVBLCount;
@property (nonatomic, readonly) NSDictionary *pidToContextInfoArrayDict;
@property (nonatomic, readonly) <SignpostSupportTimeInterval> *previousFrameOnScreenInterval;
@property (nonatomic, readonly) unsigned long long previousFramePresentationMCT;
@property (nonatomic, readonly) SignpostRenderServerRenderInterval *renderInterval;
@property (nonatomic, readonly) bool renderIntervalIsLong;
@property (nonatomic, readonly) NSArray *skippedRenders;
@property (nonatomic, readonly) unsigned int swapID;
@property (nonatomic, readonly) <SignpostSupportTimeInterval> *userVisibleGlitchInterval;

+ (id)_frameSeedForLifetimeIntervalBegin:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)_displayID;
- (id)_glitchIntervalWithRoundingUp:(bool)arg1;
- (bool)_hasDisplayID;
- (bool)_isLongMCT:(unsigned long long)arg1 expectedFrameLatency:(unsigned char)arg2;
- (unsigned long long)_overrunBeginMCT;
- (unsigned char)bufferCount;
- (id)commits;
- (id)contextInfoForHIDInput;
- (id)contributingPIDs;
- (unsigned int)displayID;
- (id)displayIDNum;
- (unsigned long long)displayRefreshIntervalDurationMachTime;
- (id)earliestTimeContextInfo;
- (id)frameLatencyInterval;
- (bool)frameLatencyIsLong;
- (id)frameOverrunInactiveDisplayInterval;
- (id)frameOverrunInterval;
- (unsigned int)frameSeed;
- (bool)frameStallSkipRequest;
- (id)hidLatencyInterval;
- (bool)hidLatencyIsLong;
- (id)initWithInterval:(id)arg1 contextArray:(id)arg2 hidLatencyInterval:(id)arg3 renderInterval:(id)arg4 frameLatencyInterval:(id)arg5 frameSeedToSkippedRenderIntervals:(id)arg6;
- (id)initWithInterval:(id)arg1 contextArray:(id)arg2 renderInterval:(id)arg3 frameSeedToSkippedRenderIntervals:(id)arg4;
- (bool)mayBeFirstFrame;
- (unsigned long long)missedVBLCount;
- (id)pidToContextIDtoContextFrameLifetimeDict;
- (id)pidToContextInfoArrayDict;
- (id)previousFrameOnScreenInterval;
- (unsigned long long)previousFramePresentationMCT;
- (id)renderInterval;
- (bool)renderIntervalIsLong;
- (void)setCommits:(id)arg1;
- (id)skippedRenders;
- (unsigned int)swapID;
- (id)userVisibleGlitchInterval;

@end
