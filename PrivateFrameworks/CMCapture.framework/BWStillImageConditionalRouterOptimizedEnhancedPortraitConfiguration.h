
@interface BWStillImageConditionalRouterOptimizedEnhancedPortraitConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int deepFusionImageOutputIndex;
@property (nonatomic, readonly) unsigned int mainImageOutputIndex;

+ (id)optimizedEnhancedPortraitConfiguration;

- (unsigned int)deepFusionImageOutputIndex;
- (id)init;
- (unsigned int)mainImageOutputIndex;

@end
