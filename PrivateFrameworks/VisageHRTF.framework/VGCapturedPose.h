
@interface VGCapturedPose : NSObject <NSSecureCoding> {
    VGCaptureData * _captureData;
    bool  _frontPose;
    float  _selectedAngle;
    NSDictionary * _trackingData;
}

@property (nonatomic, retain) VGCaptureData *captureData;
@property (nonatomic) bool frontPose;
@property (nonatomic) float selectedAngle;
@property (nonatomic, retain) NSDictionary *trackingData;
@property (nonatomic, readonly) bool valid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)captureData;
- (void)encodeWithCoder:(id)arg1;
- (bool)frontPose;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)selectedAngle;
- (void)setCaptureData:(id)arg1;
- (void)setFrontPose:(bool)arg1;
- (void)setSelectedAngle:(float)arg1;
- (void)setTrackingData:(id)arg1;
- (id)trackingData;
- (bool)valid;

@end
