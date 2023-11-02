
@interface BWInferenceResult : NSObject {
    int  _inferenceType;
    NSDictionary * _inferences;
    NSString * _preventionReason;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property (nonatomic, readonly) int inferenceType;
@property (nonatomic, readonly, copy) NSDictionary *inferences;
@property (nonatomic, readonly, copy) NSString *preventionReason;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void)dealloc;
- (id)description;
- (int)inferenceType;
- (id)inferences;
- (id)initWithInferenceType:(int)arg1 inferences:(id)arg2 atTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)initWithInferenceType:(int)arg1 preventionReason:(id)arg2 atTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)initWithResult:(id)arg1 replacementInferences:(id)arg2 replacementPreventionReason:(id)arg3;
- (bool)isValid;
- (id)preventionReason;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
