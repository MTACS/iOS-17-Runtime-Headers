
@interface JFXFaceTrackingPlaybackProperties : NSObject {
    JFXARMetadata * _arMetadata;
    bool  _canTrackFace;
    JFXFaceTrackedEffectTransform * _faceTrackingTransform;
    long long  _mediaInterfaceOrientationForDisplay;
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
    }  _mediaTimeRange;
}

@property (nonatomic, readonly) JFXARMetadata *arMetadata;
@property (nonatomic, readonly) bool canTrackFace;
@property (nonatomic, readonly) JFXFaceTrackedEffectTransform *faceTrackingTransform;
@property (nonatomic, readonly) long long mediaInterfaceOrientationForDisplay;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } mediaTimeRange;

- (void).cxx_destruct;
- (id)arMetadata;
- (bool)canTrackFace;
- (bool)containsMediaTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2;
- (id)faceTrackingTransform;
- (id)initWithFaceTrackableMediaTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2 faceTrackingTransform:(id)arg3 arMetadata:(id)arg4;
- (id)initWithNonFaceTrackableMediaTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (long long)mediaInterfaceOrientationForDisplay;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaTimeRange;

@end
