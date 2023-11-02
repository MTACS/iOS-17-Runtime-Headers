
@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements {
    <BWInferenceCropDescriptor> * _cropDescriptor;
    bool  _deviceOriented;
    id /* block */  _histogramRequest;
    bool  _includesInvalidContent;
    int  _rotationDegrees;
    long long  _videoContentMode;
}

@property (nonatomic, retain) <BWInferenceCropDescriptor> *cropDescriptor;
@property (nonatomic) bool deviceOriented;
@property (nonatomic, copy) id /* block */ histogramRequest;
@property (nonatomic) bool includesInvalidContent;
@property (nonatomic) int rotationDegrees;
@property (nonatomic) long long videoContentMode;

+ (id)defaultEspressoFormatRequirementsWithWidth:(long long)arg1 height:(long long)arg2;

- (id)cropDescriptor;
- (void)dealloc;
- (bool)deviceOriented;
- (id /* block */)histogramRequest;
- (bool)includesInvalidContent;
- (id)initWithFormat:(id)arg1;
- (int)rotationDegrees;
- (void)setCropDescriptor:(id)arg1;
- (void)setDeviceOriented:(bool)arg1;
- (void)setHistogramRequest:(id /* block */)arg1;
- (void)setIncludesInvalidContent:(bool)arg1;
- (void)setRotationDegrees:(int)arg1;
- (void)setVideoContentMode:(long long)arg1;
- (long long)videoContentMode;

@end
