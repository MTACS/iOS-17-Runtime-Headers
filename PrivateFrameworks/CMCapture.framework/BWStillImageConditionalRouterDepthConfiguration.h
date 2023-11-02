
@interface BWStillImageConditionalRouterDepthConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int rawOutputIndex;
@property (nonatomic, readonly) unsigned int yuvOutputIndex;

+ (id)depthConfiguration;

- (id)init;
- (unsigned int)rawOutputIndex;
- (unsigned int)yuvOutputIndex;

@end
