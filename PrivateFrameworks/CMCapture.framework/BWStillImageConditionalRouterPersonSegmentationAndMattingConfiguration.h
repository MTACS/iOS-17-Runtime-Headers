
@interface BWStillImageConditionalRouterPersonSegmentationAndMattingConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int defaultOutputIndex;
@property (nonatomic, readonly) unsigned int personSegmentationAndMattingOuputIndex;

+ (id)personSegmentationAndMattingConfiguration;

- (unsigned int)defaultOutputIndex;
- (id)init;
- (unsigned int)personSegmentationAndMattingOuputIndex;

@end
