
@interface BWStillImageConditionalRouterInferenceConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int defaultOutputIndex;
@property (nonatomic, readonly) unsigned int inferenceOuputIndex;

+ (id)inferenceConfiguration;

- (unsigned int)defaultOutputIndex;
- (unsigned int)inferenceOuputIndex;
- (id)init;

@end
