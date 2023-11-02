
@protocol IMPipelineComponent

@required

- (<IMPipelineComponent> *)bindTo:(id <IMPipelineComponent>)arg1;
- (IMPromise *)runIndividuallyWithInput:(id <IMPipelineParameter>)arg1;
- (IMPromise *)runWithInput:(id <IMPipelineParameter>)arg1;

@end
