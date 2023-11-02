
@interface VNTracker : NSObject <VNOriginatingRequestSpecifierProviding> {
    NSUUID * _key;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastTrackedBBox;
    NSString * _level;
    VNRequestSpecifier * _originatingRequestSpecifier;
    unsigned int  _trackedFrameCVPixelBufferFormat;
    long long  _trackedFrameNumber;
    struct shared_ptr<vision::mod::ObjectTrackerAbstract> { 
        struct ObjectTrackerAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mTrackerImpl;
}

@property (readonly) bool isResettable;
@property (readonly) bool isTracking;
@property (readonly) NSUUID *key;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastTrackedBBox;
@property (readonly) NSString *level;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property unsigned int trackedFrameCVPixelBufferFormat;
@property long long trackedFrameNumber;

+ (long long)VNTrackerOptionToTrackerType:(id)arg1;
+ (id)supportedComputeDevicesForOptions:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)_createTrackerWithLevel:(id)arg1 options:(struct ObjectTrackerOptions { int (**x1)(); id x2; int x3; }*)arg2 error:(id*)arg3;
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id*)arg3;
- (id)_postProcessTrackingResults:(id)arg1 trackerResults:(id)arg2 error:(id*)arg3;
- (bool)_updateTrackerWithModifiedBBoxForImageBuffer:(id)arg1 error:(id*)arg2;
- (bool)_visionBBoxToTrackerBBox:(id)arg1 trackedObjects:(void*)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 results:(id)arg4 error:(id*)arg5;
- (unsigned long long)hash;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isResettable;
- (bool)isTracking;
- (id)key;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastTrackedBBox;
- (id)level;
- (id)originatingRequestSpecifier;
- (bool)reset:(id*)arg1;
- (void)setLastTrackedBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTrackedFrameCVPixelBufferFormat:(unsigned int)arg1;
- (void)setTrackedFrameNumber:(long long)arg1;
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3;
- (id)trackInFrame:(id)arg1 error:(id*)arg2;
- (unsigned int)trackedFrameCVPixelBufferFormat;
- (long long)trackedFrameNumber;

@end
