
@interface ADStreamSyncTimestampedObject : NSObject {
    ADCameraCalibration * _calibration;
    id  _data;
    id  _metadata;
    double  _midExposureTimestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pose;
    double  _timestamp;
}

@property (nonatomic, retain) ADCameraCalibration *calibration;
@property (nonatomic, retain) id data;
@property (nonatomic, retain) id metadata;
@property double midExposureTimestamp;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;
@property double timestamp;

- (void).cxx_destruct;
- (id)calibration;
- (id)data;
- (id)metadata;
- (double)midExposureTimestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (void)setCalibration:(id)arg1;
- (void)setData:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMidExposureTimestamp:(double)arg1;
- (void)setPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
