
@interface HMIVideoAnalyzerFrameResult : HMFObject <HMFLogging, HMIVideoEvent, NSSecureCoding> {
    NSSet * _events;
    HMIVideoFrame * _frame;
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

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *events;
@property (readonly) HMIVideoFrame *frame;
@property (readonly) unsigned long long hash;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;
@property (readonly) Class superclass;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)combineFrameResults:(id)arg1 withResults:(id)arg2;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (id)frame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(id)arg1 events:(id)arg2;
- (id)initWithFrame:(id)arg1 events:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)maxConfidenceEventForEventClass:(Class)arg1;
- (id)maxConfidenceEvents;
- (id)redactedCopy;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
