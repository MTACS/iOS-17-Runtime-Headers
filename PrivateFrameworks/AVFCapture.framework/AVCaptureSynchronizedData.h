
@interface AVCaptureSynchronizedData : NSObject {
    AVCaptureSynchronizedDataInternal * _synchronizedDataInternal;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

+ (void)initialize;

- (id)_initWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })adjustedTimestamp;
- (int)constituentDeviceCaptureID;
- (void)dealloc;
- (bool)hasCorrespondingDepthData;
- (bool)hasCorrespondingVisionData;
- (void)setAdjustedTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimestampOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
