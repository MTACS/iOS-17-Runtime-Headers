
@interface _NUClassifyPipelineImageCorrectionResult : _NURenderResult <NUClassifyPipelineImageCorrectionResult> {
    float  _confidence;
}

@property float confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (float)confidence;
- (void)setConfidence:(float)arg1;

@end
