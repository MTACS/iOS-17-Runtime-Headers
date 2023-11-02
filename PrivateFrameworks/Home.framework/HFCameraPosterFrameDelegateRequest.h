
@interface HFCameraPosterFrameDelegateRequest : NSObject {
    <HFCameraPosterFrameDelegate> * _delegate;
    HMCameraClip * _highQualityClip;
    NSNumber * _offsetNumber;
    HMCameraClip * _timelapseClip;
}

@property (nonatomic) <HFCameraPosterFrameDelegate> *delegate;
@property (nonatomic, retain) HMCameraClip *highQualityClip;
@property (nonatomic, retain) NSNumber *offsetNumber;
@property (nonatomic, retain) HMCameraClip *timelapseClip;

- (void).cxx_destruct;
- (id)delegate;
- (id)highQualityClip;
- (id)offsetNumber;
- (void)setDelegate:(id)arg1;
- (void)setHighQualityClip:(id)arg1;
- (void)setOffsetNumber:(id)arg1;
- (void)setTimelapseClip:(id)arg1;
- (id)timelapseClip;

@end
