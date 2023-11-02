
@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration <NSSecureCoding> {
    int  _clientPID;
    bool  _gnrHDRSupported;
    bool  _hdrSupported;
    bool  _isIrisSupported;
    bool  _stereoFusionSupported;
    NSDictionary * _stillImageColorInfoForFramesOriginatingFromVideoStream;
    bool  _stillImageISPChromaNoiseReductionEnabled;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
