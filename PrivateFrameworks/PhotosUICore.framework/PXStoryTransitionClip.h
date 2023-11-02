
@interface PXStoryTransitionClip : NSObject <PXStoryClip> {
    struct { 
        long long identifier; 
        long long resourceKind; 
        struct CGSize { 
            double width; 
            double height; 
        } clipSize; 
        unsigned long long options; 
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
        long long playbackStyle; 
        struct { 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } preferredCropRect; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } acceptableCropRect; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } faceAreaRect; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } bestPlaybackRect; 
        } assetContentInfo; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } safeAreaInsets; 
        struct { 
            struct { 
                struct { 
                    double preRotationInset; 
                    double rotationAngle; 
                    double postRotationInset; 
                } top; 
                struct { 
                    double preRotationInset; 
                    double rotationAngle; 
                    double postRotationInset; 
                } left; 
                struct { 
                    double preRotationInset; 
                    double rotationAngle; 
                    double postRotationInset; 
                } bottom; 
                struct { 
                    double preRotationInset; 
                    double rotationAngle; 
                    double postRotationInset; 
                } right; 
            } sourceInsets; 
            struct { 
                struct { 
                    double preRotationInset; 
                    double rotationAngle; 
                    double postRotationInset; 
                } top; 
                struct { 
                    double preRotationInset; 
                    double rotationAngle; 
                    double postRotationInset; 
                } left; 
                struct { 
                    double preRotationInset; 
                    double rotationAngle; 
                    double postRotationInset; 
                } bottom; 
                struct { 
                    double preRotationInset; 
                    double rotationAngle; 
                    double postRotationInset; 
                } right; 
            } targetInsets; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } duration; 
        } clippingAnimationInfo; 
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
            } sourceContentsRect; 
            struct { 
                struct CGAffineTransform { 
                    double a; 
                    double b; 
                    double c; 
                    double d; 
                    double tx; 
                    double ty; 
                } t; 
            } targetContentsRect; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } duration; 
        } kenBurnsAnimationInfo; 
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
            long long mode; 
            long long modeBasis; 
            float volume; 
            double JCutLength; 
            double LCutLength; 
            double fadeIn; 
            double fadeOut; 
        } audioInfo; 
    }  _clipInfo;
    <PXStoryClip> * _originalClip;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; } clipInfo;
@property (nonatomic, readonly) PFStoryRecipeDisplayAssetNormalization *colorNormalization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; } info;
@property (nonatomic, readonly) <PXStoryClip> *originalClip;
@property (nonatomic, readonly) <PXStoryResource> *resource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } videoTimeRange;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; })clipInfo;
- (id)colorNormalization;
- (id)copyWithInfo:(struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; })arg1;
- (long long)identifier;
- (struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; })info;
- (id)initWithClipInfo:(struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; })arg1 originalClip:(id)arg2;
- (bool)isEqualToClip:(id)arg1;
- (bool)isVisuallyEqualToClip:(id)arg1;
- (id)originalClip;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })playbackTimeRangeForClipDuration:(double)arg1;
- (id)resource;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })videoTimeRange;

@end
