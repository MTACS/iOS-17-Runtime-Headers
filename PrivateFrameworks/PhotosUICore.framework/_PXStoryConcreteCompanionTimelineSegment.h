
@interface _PXStoryConcreteCompanionTimelineSegment : NSObject <PXStoryCompanionTimelineSegment> {
    struct { 
        long long identifier; 
        struct { 
            long long numberOfClips; 
            bool clipFramesExtendToBounds; 
            long long mainDividerAxis; 
            double mainDividerSplitRatio; 
            long long numberOfAssets; 
        } compositionInfo; 
        struct { 
            BOOL orderOutTransition; 
            unsigned char options; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } duration; 
            BOOL fallbackFromTransitionKind; 
            union { 
                BOOL panDirection; 
                BOOL scaleDirection; 
                BOOL rotateDirection; 
                BOOL wipeKind; 
            } ; 
            union { 
                double scaleRelativeFactor; 
                double rotateAngleInDegrees; 
                BOOL wipeFirstAssetDirection; 
            } ; 
        } transitionInfo; 
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
            struct { 
                struct { 
                    long long value; 
                    int timescale; 
                    unsigned int flags; 
                    long long epoch; 
                } time; 
                long long rank; 
            } preferredCue; 
            BOOL expectedTransitionKind; 
        } durationInfo; 
    }  _segmentInfo;
    <PXStoryTimeline> * _timeline;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) <PXStoryCompanionTimelineSegmentTransition> *orderOutTransition;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredDuration;
@property (nonatomic, readonly) struct { long long x1; struct { long long x_2_1_1; bool x_2_1_2; long long x_2_1_3; double x_2_1_4; long long x_2_1_5; } x2; struct { BOOL x_3_1_1; unsigned char x_3_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_3_1_3; BOOL x_3_1_4; union { BOOL x_5_2_1; BOOL x_5_2_2; BOOL x_5_2_3; BOOL x_5_2_4; } x_3_1_5; union { double x_6_2_1; double x_6_2_2; BOOL x_6_2_3; } x_3_1_6; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_4_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_4_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_4_1_4; BOOL x_4_1_5; } x4; } segmentInfo;
@property (nonatomic, readonly) <PXStoryTimeline> *timeline;

- (void).cxx_destruct;
- (id)assets;
- (id)initWithTimeline:(id)arg1 segmentIndex:(long long)arg2;
- (id)orderOutTransition;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredDuration;
- (struct { long long x1; struct { long long x_2_1_1; bool x_2_1_2; long long x_2_1_3; double x_2_1_4; long long x_2_1_5; } x2; struct { BOOL x_3_1_1; unsigned char x_3_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_3_1_3; BOOL x_3_1_4; union { BOOL x_5_2_1; BOOL x_5_2_2; BOOL x_5_2_3; BOOL x_5_2_4; } x_3_1_5; union { double x_6_2_1; double x_6_2_2; BOOL x_6_2_3; } x_3_1_6; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_4_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_4_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_4_1_4; BOOL x_4_1_5; } x4; })segmentInfo;
- (id)timeline;

@end
