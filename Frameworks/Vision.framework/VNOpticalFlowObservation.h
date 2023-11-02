
@interface VNOpticalFlowObservation : VNPixelBufferObservation {
    LKTOpticalFlow * _opticalFlow;
    VNImageSignature * _targetImageSignature;
}

@property (nonatomic, retain) LKTOpticalFlow *opticalFlow;
@property (nonatomic, retain) VNImageSignature *targetImageSignature;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)opticalFlow;
- (void)setOpticalFlow:(id)arg1;
- (void)setTargetImageSignature:(id)arg1;
- (id)targetImageSignature;

@end
