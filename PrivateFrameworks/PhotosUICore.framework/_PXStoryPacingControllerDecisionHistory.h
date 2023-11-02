
@interface _PXStoryPacingControllerDecisionHistory : NSObject {
    long long  _decisionCount;
    NSMutableArray * _decisionHistory;
    long long  _onBarCount;
    double  _onBarPercentage;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentError;
@property (nonatomic, readonly) long long decisionCount;
@property (nonatomic, readonly) long long onBarCount;
@property (nonatomic, readonly) double onBarPercentage;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentError;
- (long long)decisionCount;
- (id)descriptionWithShortStyle:(bool)arg1;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; long long x_5_1_2; } x5; long long x6; struct { long long x_7_1_1; int x_7_1_2; unsigned int x_7_1_3; long long x_7_1_4; } x7; double x8; struct { long long x_9_1_1; int x_9_1_2; unsigned int x_9_1_3; long long x_9_1_4; } x9; long long x10; BOOL x11; struct { long long x_12_1_1; int x_12_1_2; unsigned int x_12_1_3; long long x_12_1_4; } x12; })firstPacingDecisionAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (long long)onBarCount;
- (double)onBarPercentage;
- (void)recordDecision:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; long long x_5_1_2; } x5; long long x6; struct { long long x_7_1_1; int x_7_1_2; unsigned int x_7_1_3; long long x_7_1_4; } x7; double x8; struct { long long x_9_1_1; int x_9_1_2; unsigned int x_9_1_3; long long x_9_1_4; } x9; long long x10; BOOL x11; struct { long long x_12_1_1; int x_12_1_2; unsigned int x_12_1_3; long long x_12_1_4; } x12; })arg1;
- (void)resetWithTargetDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 reason:(id)arg2;

@end
