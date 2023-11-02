
@interface IMPipelineComponent : NSObject <IMPipelineComponent> {
    <IMPipelineComponent> * _nextComponent;
}

@property (nonatomic, retain) <IMPipelineComponent> *nextComponent;

+ (id)pipelineFromComponents:(id)arg1;

- (void).cxx_destruct;
- (id)bindTo:(id)arg1;
- (id)nextComponent;
- (id)runIndividuallyWithInput:(id)arg1;
- (id)runWithInput:(id)arg1;
- (void)setNextComponent:(id)arg1;

@end
