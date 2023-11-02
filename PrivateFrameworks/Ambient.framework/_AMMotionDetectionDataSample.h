
@interface _AMMotionDetectionDataSample : NSObject {
    NSArray * _data;
    double  _timestampSeconds;
}

@property (nonatomic, retain) NSArray *data;
@property (nonatomic) double timestampSeconds;

+ (id)zeroMotionDataWithTimestamp:(double)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)setData:(id)arg1;
- (void)setTimestampSeconds:(double)arg1;
- (double)timestampSeconds;

@end
