
@protocol BWDeepFusionProcessorInputDelegate <NSObject>

@required

- (void)addInferencesForInput:(BWDeepFusionProcessorInput *)arg1;
- (void)beginProcessingCachedBuffersForInput:(BWDeepFusionProcessorInput *)arg1;
- (void)input:(BWDeepFusionProcessorInput *)arg1 addInputBuffer:(BWDeepFusionInputBuffer *)arg2;

@end
