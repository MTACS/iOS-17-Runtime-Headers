
@interface PXStoryMultipartPanoramaParameters : NSObject {
    struct { 
        struct { 
            struct CGAffineTransform { 
                double a; 
                double b; 
                double c; 
                double d; 
                double tx; 
                double ty; 
            } t; 
        } s; 
        struct { 
            struct CGAffineTransform { 
                double a; 
                double b; 
                double c; 
                double d; 
                double tx; 
                double ty; 
            } t; 
        } t; 
    }  _normalizedKenBurnsEffectParameters;
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
    }  _partDurationInfo;
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

@property (nonatomic, readonly) struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; } normalizedKenBurnsEffectParameters;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; } partDurationInfo;
@property (nonatomic, readonly) struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; } transitionInfo;

- (id)init;
- (id)initWithNormalizedKenBurnsEffectParameters:(struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; })arg1 partDurationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })arg2 transitionInfo:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })arg3;
- (struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; })normalizedKenBurnsEffectParameters;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })partDurationInfo;
- (struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })transitionInfo;

@end
