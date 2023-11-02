
@interface _PXStoryConcreteCompanionTimelineSegmentTransition : NSObject <PXStoryCompanionTimelineSegmentTransition> {
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
    }  _transitionInfo;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; } transitionInfo;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)initWithTransitionInfo:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })arg1;
- (long long)kind;
- (struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })transitionInfo;

@end
