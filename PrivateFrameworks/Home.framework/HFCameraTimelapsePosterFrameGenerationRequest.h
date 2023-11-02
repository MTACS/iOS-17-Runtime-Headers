
@interface HFCameraTimelapsePosterFrameGenerationRequest : NSObject {
    HMCameraClip * _clip;
    HFCameraImageGenerator * _imageGenerator;
    double  _timelapseOffset;
}

@property (nonatomic, retain) HMCameraClip *clip;
@property (nonatomic, retain) HFCameraImageGenerator *imageGenerator;
@property (nonatomic) double timelapseOffset;

- (void).cxx_destruct;
- (id)clip;
- (id)imageGenerator;
- (void)setClip:(id)arg1;
- (void)setImageGenerator:(id)arg1;
- (void)setTimelapseOffset:(double)arg1;
- (double)timelapseOffset;

@end
