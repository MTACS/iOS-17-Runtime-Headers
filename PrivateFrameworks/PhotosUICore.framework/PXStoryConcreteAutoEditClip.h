
@interface PXStoryConcreteAutoEditClip : NSObject <PXStoryMutableAutoEditClip> {
    struct { 
        long long mode; 
        long long modeBasis; 
        float volume; 
        double JCutLength; 
        double LCutLength; 
        double fadeIn; 
        double fadeOut; 
    }  _audioInfo;
    NSDictionary * _debugInfo;
    NSArray * _displayAssets;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } minimumDuration; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } preferredDuration; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } maximumDuration; 
    }  _durationInfo;
    double  _durationMultiplier;
    struct { 
        long long moduleType; 
        bool isStart; 
        bool isBreak; 
    }  _moduleInfo;
    struct { 
        long long style; 
        union { 
            struct { 
                unsigned long long direction; 
                unsigned long long relativeMotion; 
            } pan; 
            struct { 
                unsigned long long direction; 
            } scale; 
            struct { 
                unsigned long long direction; 
            } rotate; 
        } settings; 
    }  _motionInfo;
    long long  _playbackStyle;
    struct { 
        long long kind; 
        double duration; 
        union { 
            struct { 
                unsigned long long direction; 
                unsigned long long relativeMotion; 
            } pan; 
            struct { 
                unsigned long long direction; 
            } scale; 
            struct { 
                unsigned long long direction; 
            } rotate; 
            struct { 
                BOOL kind; 
                BOOL firstAssetDirection; 
            } wipe; 
        } settings; 
    }  _transitionInfo;
}

@property (nonatomic) struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; } audioInfo;
@property (nonatomic, copy) NSDictionary *debugInfo;
@property (nonatomic, readonly) NSArray *displayAssets;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; } durationInfo;
@property (nonatomic) double durationMultiplier;
@property (nonatomic) struct { long long x1; bool x2; bool x3; } moduleInfo;
@property (nonatomic) struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; } motionInfo;
@property (nonatomic) long long playbackStyle;
@property (nonatomic) struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; } transitionInfo;

+ (id)composedClipWithClips:(id)arg1;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; })audioInfo;
- (id)debugInfo;
- (id)description;
- (id)displayAssets;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })durationInfo;
- (double)durationMultiplier;
- (id)init;
- (id)initWithDisplayAsset:(id)arg1;
- (id)initWithDisplayAssets:(id)arg1;
- (struct { long long x1; bool x2; bool x3; })moduleInfo;
- (struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })motionInfo;
- (long long)playbackStyle;
- (void)setAudioInfo:(struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; })arg1;
- (void)setDebugInfo:(id)arg1;
- (void)setDurationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg1;
- (void)setDurationMultiplier:(double)arg1;
- (void)setModuleInfo:(struct { long long x1; bool x2; bool x3; })arg1;
- (void)setMotionInfo:(struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })arg1;
- (void)setPlaybackStyle:(long long)arg1;
- (void)setTransitionInfo:(struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })arg1;
- (struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })transitionInfo;

@end
