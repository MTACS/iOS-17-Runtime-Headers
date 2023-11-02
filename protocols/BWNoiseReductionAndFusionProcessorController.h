
@protocol BWNoiseReductionAndFusionProcessorController <NSObject>

@required

+ (id)new;

- (<BWNoiseReductionAndFusionProcessorBracketingParameters> *)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(NSString *)arg1;
- (<BWNoiseReductionAndFusionProcessorBracketingParameters> *)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(BWFrameStatistics *)arg2 stationary:(bool)arg3 sphereOffsetEnabled:(bool)arg4 detectedObjects:(NSDictionary *)arg5;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id <BWNoiseReductionAndFusionProcessorInput>)arg1 delegate:(id <BWNoiseReductionAndFusionProcessorDelegate>)arg2 processErrorRecoveryFrame:(bool)arg3 processOriginalImage:(bool)arg4 processToneMapping:(bool)arg5 processInferenceInputImage:(bool)arg6 clientBracketSequenceNumber:(int)arg7 processSemanticRendering:(bool)arg8 provideInferenceInputImageForProcessing:(bool)arg9 inferencesAvailable:(bool)arg10;
- (bool)finishProcessingCurrentInputNow;
- (id)init;
- (id)initWithConfiguration:(id <BWNoiseReductionAndFusionProcessorControllerConfiguration>)arg1;
- (int)progressiveLowLightFusionBatchSize;

@end
