
@interface AVTFaceTrackingInfo : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _rawTransform;
    struct { 
        double timestamp; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*translation; 
    }  _trackingData;
}

@property (nonatomic, readonly) bool hasFaceTrackingData;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } rawTransform;
@property (nonatomic, readonly) double timestamp;
@property (readonly) const struct { double x1; bool x2; float x3[51]; float x4[51]; float x5[1]; float x6[1]; }*trackingData;

+ (id)dataWithARFrame:(id)arg1 captureOrientation:(long long)arg2 interfaceOrientation:(long long)arg3;
+ (id)trackingInfoWithARFrame:(id)arg1 inputOrientation:(long long)arg2 outputOrientation:(long long)arg3;
+ (id)trackingInfoWithARFrame:(id)arg1 inputOrientation:(long long)arg2 outputOrientation:(long long)arg3 constrainHeadPose:(bool)arg4;
+ (id)trackingInfoWithARFrame:(id)arg1 worldAlignment:(long long)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4;
+ (id)trackingInfoWithARFrame:(id)arg1 worldAlignment:(long long)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4 constrainHeadPose:(bool)arg5;
+ (id)trackingInfoWithTrackingData:(struct { double x1; bool x2; float x3[51]; float x4[51]; float x5[1]; float x6[1]; }*)arg1;

- (bool)hasFaceTrackingData;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rawTransform;
- (double)timestamp;
- (const struct { double x1; bool x2; float x3[51]; float x4[51]; float x5[1]; float x6[1]; }*)trackingData;

@end
