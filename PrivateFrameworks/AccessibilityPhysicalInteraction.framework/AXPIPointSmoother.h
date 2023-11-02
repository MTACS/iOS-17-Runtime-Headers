
@interface AXPIPointSmoother : NSObject {
    unsigned long long  _bufferSize;
    <AXPIPointSmootherClientDelegate> * _delegate;
    unsigned long long  _framesPerSecond;
    unsigned long long  _lastTimePointAdded;
    unsigned long long  _lowFPSDetectedCount;
    NSMutableArray * _pointBuffer;
    bool  _shouldOffsetBufferPoints;
    double  _smoothingMaxDelta;
    bool  _useWeightedMovingAverage;
    double  _xOffset;
    double  _xOrder;
    double  _yOffset;
    double  _yOrder;
}

@property (nonatomic) unsigned long long bufferSize;
@property (nonatomic) <AXPIPointSmootherClientDelegate> *delegate;
@property (nonatomic) unsigned long long framesPerSecond;
@property (nonatomic) unsigned long long lastTimePointAdded;
@property (nonatomic) unsigned long long lowFPSDetectedCount;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;
@property (nonatomic, retain) NSMutableArray *pointBuffer;
@property (nonatomic) bool shouldOffsetBufferPoints;
@property (nonatomic) double smoothingMaxDelta;
@property (nonatomic) bool useWeightedMovingAverage;
@property (nonatomic) double xOffset;
@property (nonatomic) double xOrder;
@property (nonatomic) double yOffset;
@property (nonatomic) double yOrder;

+ (struct CGPoint { double x1; double x2; })_averagePointsInArray:(id)arg1;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_deltaForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)bufferSize;
- (id)delegate;
- (unsigned long long)framesPerSecond;
- (id)init;
- (unsigned long long)lastTimePointAdded;
- (unsigned long long)lowFPSDetectedCount;
- (struct CGPoint { double x1; double x2; })point;
- (id)pointBuffer;
- (void)removeAllPoints;
- (void)setBufferSize:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFramesPerSecond:(unsigned long long)arg1;
- (void)setLastTimePointAdded:(unsigned long long)arg1;
- (void)setLowFPSDetectedCount:(unsigned long long)arg1;
- (void)setPointBuffer:(id)arg1;
- (void)setShouldOffsetBufferPoints:(bool)arg1;
- (void)setSmoothingMaxDelta:(double)arg1;
- (void)setUseWeightedMovingAverage:(bool)arg1;
- (void)setXOffset:(double)arg1;
- (void)setXOrder:(double)arg1;
- (void)setYOffset:(double)arg1;
- (void)setYOrder:(double)arg1;
- (bool)shouldOffsetBufferPoints;
- (double)smoothingMaxDelta;
- (void)updateFPS;
- (bool)useWeightedMovingAverage;
- (double)xOffset;
- (double)xOrder;
- (double)yOffset;
- (double)yOrder;

@end
