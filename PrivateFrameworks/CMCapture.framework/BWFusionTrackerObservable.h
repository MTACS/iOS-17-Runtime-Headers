
@interface BWFusionTrackerObservable : NSObject <FTObservable> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _box;
    float  _confidence;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameTimestamp;
    unsigned long long  _identifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastDetectionTimestamp;
    NSDictionary * _metadata;
    long long  _objectKind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })box;
- (float)confidence;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameTimestamp;
- (unsigned long long)identifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastDetectionTimestamp;
- (id)metadata;
- (long long)objectKind;

@end
