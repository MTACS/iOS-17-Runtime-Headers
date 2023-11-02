
@interface JFXCompositionItem : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _audioEndOffset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _audioStartOffset;
    <JFXPlayableElement> * _clip;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _destinationDuration;
    bool  _isFinalClip;
    bool  _isFreezeFrame;
    bool  _isWaitingForResource;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _sourceTimeRange;
    float  _speed;
    int  _timeScale;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } audioEndOffset;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } audioStartOffset;
@property (nonatomic, retain) <JFXPlayableElement> *clip;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } destinationDuration;
@property (nonatomic, readonly) bool hasVideoContent;
@property (nonatomic) bool isFinalClip;
@property (nonatomic, readonly) bool isFreezeFrame;
@property (nonatomic, readonly) bool isWaitingForResource;
@property (nonatomic, readonly) bool needAudioLoop;
@property (nonatomic, readonly) bool needSilenceAtEnd;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } sourceTimeRange;
@property (nonatomic) float speed;
@property (nonatomic) int timeScale;

+ (id)compositionItemWithClip:(id)arg1 timeScale:(int)arg2;
+ (void)mediaserverdCrashed;
+ (id)silenceAsset;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })audioEndOffset;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })audioStartOffset;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)audioTrackSegmentsLoopedWithDestinationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 paddedFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)clip;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })destinationDuration;
- (id)emptyTrackSegmentWithDestinationRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)emptyTrackSegmentWithDestinationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)hasVideoContent;
- (id)initWithClip:(id)arg1 timeScale:(int)arg2;
- (bool)isFinalClip;
- (bool)isFreezeFrame;
- (bool)isWaitingForResource;
- (bool)needAudioLoop;
- (bool)needSilenceAtEnd;
- (void)setAudioEndOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAudioStartOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setClip:(id)arg1;
- (void)setDestinationDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIsFinalClip:(bool)arg1;
- (void)setSourceTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimeScale:(int)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })sourceTimeRange;
- (float)speed;
- (int)timeScale;
- (id)videoTrackSegmentsWithDestinationRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;

@end
