
@interface STUIStatusBarDynamicSplitAvoidanceData : NSObject {
    NSMutableDictionary * _avoidanceFrameAbsoluteFrames;
    double  _leadingDelta;
    double  _trailingDelta;
}

@property (nonatomic, retain) NSMutableDictionary *avoidanceFrameAbsoluteFrames;
@property (nonatomic) double leadingDelta;
@property (nonatomic) double trailingDelta;

- (void).cxx_destruct;
- (id)avoidanceFrameAbsoluteFrames;
- (id)init;
- (id)initWithLeadingDelta:(double)arg1 trailingDelta:(double)arg2;
- (double)leadingDelta;
- (void)setAvoidanceFrameAbsoluteFrames:(id)arg1;
- (void)setLeadingDelta:(double)arg1;
- (void)setTrailingDelta:(double)arg1;
- (double)trailingDelta;

@end
