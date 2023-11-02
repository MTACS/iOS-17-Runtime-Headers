
@protocol VNLegacyForcedCleanupImplementing <NSObject>

@required

- (void)legacyForcedCleanupOfFacePipelineWithLevel:(NSString *)arg1;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(NSString *)arg1;
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(NSString *)arg1;
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(NSString *)arg1;
- (void)legacyForcedCleanupWithOptions:(NSDictionary *)arg1;

@end
