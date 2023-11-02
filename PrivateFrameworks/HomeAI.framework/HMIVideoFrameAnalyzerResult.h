
@interface HMIVideoFrameAnalyzerResult : HMFObject <HMIVideoEvent> {
    NSSet * _backgroundEvents;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _backgroundTimeStamp;
    NSSet * _events;
    HMIVideoFrame * _frame;
    NSArray * _motionDetections;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
}

@property (readonly) NSSet *backgroundEvents;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } backgroundTimeStamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *events;
@property (readonly) HMIVideoFrame *frame;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *motionDetections;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;
@property (readonly) Class superclass;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)backgroundEvents;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })backgroundTimeStamp;
- (id)debugDescription;
- (id)description;
- (id)events;
- (id)frame;
- (id)initWithFrame:(id)arg1 events:(id)arg2 backgroundEvents:(id)arg3 backgroundTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 motionDetections:(id)arg6;
- (id)motionDetections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
