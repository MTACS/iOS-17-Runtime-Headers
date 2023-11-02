
@interface CinematicTrack : BaseTrack {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _afterImageBoundingBox;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _afterImageExpirationTimestamp;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBoxForFraming;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastMeasuredFaceBoundingBox;
    bool  isTrackedByDirector;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBoxForFraming;
@property (nonatomic) bool isTrackedByDirector;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })afterImageBoundingBoxAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxForFraming;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundingBoxForFramingAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithObservation:(id)arg1 identifier:(long long)arg2 options:(id)arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (bool)isTrackedByDirector;
- (void)resetProperties;
- (void)setAfterImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDuration:(float)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setBoundingBoxForFraming:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsTrackedByDirector:(bool)arg1;
- (void)updatePropertiesWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
