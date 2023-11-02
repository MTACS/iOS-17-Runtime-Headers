
@interface HMDCameraRecordingAnalysisNode : HMFObject {
    NSDictionary * _metrics;
    HMDResidentDevice * _residentDevice;
}

@property (nonatomic, readonly, copy) NSDictionary *metrics;
@property (nonatomic, readonly) HMDResidentDevice *residentDevice;

- (void).cxx_destruct;
- (id)initWithResidentDevice:(id)arg1 metrics:(id)arg2;
- (id)metrics;
- (id)residentDevice;

@end
