
@interface HMICameraVideoFrameResult : NSObject <NSSecureCoding> {
    NSSet * _analyzerEvents;
    NSDictionary * _annotationScores;
    NSArray * _detections;
    long long  _events;
    NSSet * _faceClassifications;
    HMICameraVideoFrame * _frame;
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

@property (readonly) NSSet *analyzerEvents;
@property (readonly) NSDictionary *annotationScores;
@property (readonly) NSArray *detections;
@property (readonly) long long events;
@property (readonly) NSSet *faceClassifications;
@property (readonly) HMICameraVideoFrame *frame;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;

+ (id)_annotationScoresFromAnalyzerEvents:(id)arg1;
+ (id)_detectionsFromAnalyzerEvents:(id)arg1;
+ (long long)_eventsFromAnalyzerEvents:(id)arg1;
+ (id)_faceClassificationsFromAnalyzerEvents:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyzerEvents;
- (id)annotationScores;
- (id)detections;
- (void)encodeWithCoder:(id)arg1;
- (long long)events;
- (id)faceClassifications;
- (id)frame;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(id)arg1 events:(long long)arg2 annotationScores:(id)arg3 detections:(id)arg4 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 faceClassifications:(id)arg6;
- (id)initWithFrame:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 analyzerEvents:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)maxConfidenceEventForEventClass:(Class)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;

@end
