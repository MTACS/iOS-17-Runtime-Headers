
@interface AccelerometerBuffer : NSObject {
    NSMutableArray * _accelBuffer;
    unsigned long long  _bufferSize;
    double  _localMax;
    double  _localMaxAboveAverage;
    double  _localMin;
    double  _localMinBelowAverage;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _movingSum;
    unsigned long long  _sampleRate;
}

@property (nonatomic) double localMax;
@property (nonatomic) double localMaxAboveAverage;
@property (nonatomic) double localMin;
@property (nonatomic) double localMinBelowAverage;

- (void).cxx_destruct;
- (void)_fillAccelBufferBeforeFirstSampleTimestamp:(double)arg1;
- (void)addData:(struct { double x1; double x2; double x3; })arg1 timestamp:(double)arg2;
- (id)bufferWithMovingSum:(struct { double x1; double x2; double x3; }*)arg1;
- (struct { double x1; double x2; double x3; double x4; })data;
- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1 accelerometerSampleRateInHz:(unsigned long long)arg2;
- (double)localMax;
- (double)localMaxAboveAverage;
- (double)localMin;
- (double)localMinBelowAverage;
- (id)logBuffer;
- (void)reset;
- (void)resetMovingSum;
- (void)setLocalMax:(double)arg1;
- (void)setLocalMaxAboveAverage:(double)arg1;
- (void)setLocalMin:(double)arg1;
- (void)setLocalMinBelowAverage:(double)arg1;

@end
