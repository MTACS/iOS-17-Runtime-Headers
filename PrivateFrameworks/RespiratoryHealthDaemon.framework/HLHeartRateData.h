
@interface HLHeartRateData : NSObject {
    double  _confidence;
    unsigned long long  _confidenceLevel;
    int  _context;
    double  _heartRate;
    NSDate * _timestamp;
    NSUUID * _uuid;
}

@property (readonly) double confidence;
@property (readonly) unsigned long long confidenceLevel;
@property (readonly) int context;
@property (nonatomic) double heartRate;
@property (readonly) NSDate *timestamp;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (double)confidence;
- (unsigned long long)confidenceLevel;
- (int)context;
- (double)heartRate;
- (void)setHeartRate:(double)arg1;
- (void)setUuid:(id)arg1;
- (id)timestamp;
- (id)uuid;

@end
