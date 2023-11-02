
@interface BWLearnedNRProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    NSDictionary * _finalCropRectOverscanMultiplierByPortType;
    BWVideoFormat * _inputFormat;
    BWVideoFormat * _outputFormat;
    bool  _quadraSupportEnabled;
    BWVideoFormat * _ultraHighResolutionInputFormat;
    BWVideoFormat * _ultraHighResolutionOutputFormat;
}

@property (nonatomic, retain) NSDictionary *finalCropRectOverscanMultiplierByPortType;
@property (nonatomic, retain) BWVideoFormat *inputFormat;
@property (nonatomic, retain) BWVideoFormat *outputFormat;
@property (nonatomic) bool quadraSupportEnabled;
@property (nonatomic, retain) BWVideoFormat *ultraHighResolutionInputFormat;
@property (nonatomic, retain) BWVideoFormat *ultraHighResolutionOutputFormat;

- (void)dealloc;
- (id)finalCropRectOverscanMultiplierByPortType;
- (id)inputFormat;
- (id)outputFormat;
- (bool)quadraSupportEnabled;
- (void)setFinalCropRectOverscanMultiplierByPortType:(id)arg1;
- (void)setInputFormat:(id)arg1;
- (void)setOutputFormat:(id)arg1;
- (void)setQuadraSupportEnabled:(bool)arg1;
- (void)setUltraHighResolutionInputFormat:(id)arg1;
- (void)setUltraHighResolutionOutputFormat:(id)arg1;
- (id)ultraHighResolutionInputFormat;
- (id)ultraHighResolutionOutputFormat;

@end
