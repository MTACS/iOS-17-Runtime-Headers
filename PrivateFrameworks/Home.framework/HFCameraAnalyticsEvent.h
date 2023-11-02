
@interface HFCameraAnalyticsEvent : NSObject {
    HMCameraClip * _cameraClip;
    NSDate * _startDate;
}

@property (nonatomic) HMCameraClip *cameraClip;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)errorCodeForError:(id)arg1;

- (void).cxx_destruct;
- (id)cameraClip;
- (id)init;
- (id)initWithCameraClip:(id)arg1;
- (id)sendEventForState:(unsigned long long)arg1;
- (void)setCameraClip:(id)arg1;
- (id)startDate;

@end
