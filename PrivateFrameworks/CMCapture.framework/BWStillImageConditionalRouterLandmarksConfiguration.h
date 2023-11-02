
@interface BWStillImageConditionalRouterLandmarksConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int defaultOutputIndex;
@property (nonatomic, readonly) unsigned int landmarksOutputIndex;

+ (id)landmarksConfiguration;

- (unsigned int)defaultOutputIndex;
- (id)init;
- (unsigned int)landmarksOutputIndex;

@end
