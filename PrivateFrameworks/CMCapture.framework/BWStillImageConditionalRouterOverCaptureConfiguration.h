
@interface BWStillImageConditionalRouterOverCaptureConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int narrowFieldOfViewOutputIndex;
@property (nonatomic, readonly) unsigned int wideFieldOfViewOutputIndex;

+ (id)overCaptureConfiguration;

- (id)init;
- (unsigned int)narrowFieldOfViewOutputIndex;
- (unsigned int)wideFieldOfViewOutputIndex;

@end
