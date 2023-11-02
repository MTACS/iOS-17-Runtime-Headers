
@interface PXGTextureManagerPreheatingStrategy : NSObject {
    double  _fastOffset;
    double  _mediumOffset;
    long long  _previousRegime;
    double  _slowOffset;
    double  _stoppedOffset;
}

@property (nonatomic) double fastOffset;
@property (nonatomic, readonly) double maxPreheatingDistance;
@property (nonatomic) double mediumOffset;
@property (nonatomic) double slowOffset;
@property (nonatomic) double stoppedOffset;

+ (id)defaultPreheatingStrategy;
+ (id)lowMemoryPreheatingStrategy;
+ (id)noPreheatingStrategy;

- (double)fastOffset;
- (double)maxPreheatingDistance;
- (double)mediumOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preheatingRectForLayout:(id)arg1 interactionState:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })arg2;
- (void)setFastOffset:(double)arg1;
- (void)setMediumOffset:(double)arg1;
- (void)setSlowOffset:(double)arg1;
- (void)setStoppedOffset:(double)arg1;
- (double)slowOffset;
- (double)stoppedOffset;

@end
