
@interface _PXStoryPacingControllerDecisionList : NSObject {
    long long  _capacity;
    struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; long long x_5_1_2; } x5; long long x6; struct { long long x_7_1_1; int x_7_1_2; unsigned int x_7_1_3; long long x_7_1_4; } x7; double x8; struct { long long x_9_1_1; int x_9_1_2; unsigned int x_9_1_3; long long x_9_1_4; } x9; long long x10; BOOL x11; struct { long long x_12_1_1; int x_12_1_2; unsigned int x_12_1_3; long long x_12_1_4; } x12; } * _decisions;
    long long  _decisionsCount;
    NSString * _resetReason;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetRemainingDuration;
}

@property (nonatomic, readonly) struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; long long x_5_1_2; } x5; long long x6; struct { long long x_7_1_1; int x_7_1_2; unsigned int x_7_1_3; long long x_7_1_4; } x7; double x8; struct { long long x_9_1_1; int x_9_1_2; unsigned int x_9_1_3; long long x_9_1_4; } x9; long long x10; BOOL x11; struct { long long x_12_1_1; int x_12_1_2; unsigned int x_12_1_3; long long x_12_1_4; } x12; }*decisions;
@property (nonatomic, readonly) long long decisionsCount;
@property (nonatomic, readonly) NSString *resetReason;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } targetRemainingDuration;

- (void).cxx_destruct;
- (void)appendDecision:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; long long x_5_1_2; } x5; long long x6; struct { long long x_7_1_1; int x_7_1_2; unsigned int x_7_1_3; long long x_7_1_4; } x7; double x8; struct { long long x_9_1_1; int x_9_1_2; unsigned int x_9_1_3; long long x_9_1_4; } x9; long long x10; BOOL x11; struct { long long x_12_1_1; int x_12_1_2; unsigned int x_12_1_3; long long x_12_1_4; } x12; })arg1;
- (void)dealloc;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; long long x_5_1_2; } x5; long long x6; struct { long long x_7_1_1; int x_7_1_2; unsigned int x_7_1_3; long long x_7_1_4; } x7; double x8; struct { long long x_9_1_1; int x_9_1_2; unsigned int x_9_1_3; long long x_9_1_4; } x9; long long x10; BOOL x11; struct { long long x_12_1_1; int x_12_1_2; unsigned int x_12_1_3; long long x_12_1_4; } x12; }*)decisions;
- (long long)decisionsCount;
- (void)enumerateDecisionsWithBlock:(id /* block */)arg1;
- (id)initWithResetReason:(id)arg1 targetRemainingDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)resetReason;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetRemainingDuration;

@end
