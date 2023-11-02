
@interface HMDCameraRecordingPreferredVideoConfiguration : NSObject {
    NSDictionary * _bitRateByFrameRate;
    long long  _h264Level;
    NSNumber * _keyFrameInterval;
    long long  _resolution;
}

@property (readonly) NSDictionary *bitRateByFrameRate;
@property (readonly) long long h264Level;
@property (readonly) NSNumber *keyFrameInterval;
@property (readonly) long long resolution;

- (void).cxx_destruct;
- (id)bitRateByFrameRate;
- (id)description;
- (long long)h264Level;
- (id)initWithResolution:(long long)arg1 bitRateByFrameRate:(id)arg2 keyFrameInterval:(id)arg3 h264Level:(long long)arg4;
- (id)keyFrameInterval;
- (long long)resolution;

@end
