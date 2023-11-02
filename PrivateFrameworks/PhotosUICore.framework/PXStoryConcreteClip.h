
@interface PXStoryConcreteClip : NSObject <PXStoryClip> {
    long long  _identifier;
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
    }  _info;
    <PXStoryResource> * _resource;
    long long  _resourceIndex;
    long long  _resourceKind;
    long long  _resourceOccurrenceIndex;
    PXStoryResourcesDataSource * _resourcesDataSource;
}

@property (nonatomic, readonly) PFStoryRecipeDisplayAssetNormalization *colorNormalization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; } info;
@property (nonatomic, readonly) <PXStoryResource> *resource;
@property (nonatomic, readonly) long long resourceIndex;
@property (nonatomic, readonly) long long resourceKind;
@property (nonatomic, readonly) long long resourceOccurrenceIndex;
@property (nonatomic, readonly) PXStoryResourcesDataSource *resourcesDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } videoTimeRange;

- (void).cxx_destruct;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })_videoTimeRangeForTargetDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)colorNormalization;
- (id)copyWithInfo:(struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; })arg1;
- (id)description;
- (unsigned long long)hash;
- (long long)identifier;
- (struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; })info;
- (id)init;
- (id)initWithInfo:(struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; })arg1 resourceKind:(long long)arg2 resourceIndex:(long long)arg3 resourceOccurrenceIndex:(long long)arg4 resourcesDataSource:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClip:(id)arg1;
- (bool)isVisuallyEqualToClip:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })playbackTimeRangeForClipDuration:(double)arg1;
- (id)resource;
- (long long)resourceIndex;
- (long long)resourceKind;
- (long long)resourceOccurrenceIndex;
- (id)resourcesDataSource;
- (id)videoHighlight;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })videoTimeRange;

@end
