
@protocol BLSHEngineRenderFlipbookSessionDelegate <BLSHFlipbookPowerSavingProviding>

@required

- (bool)isUsingPseudoFlipbook;
- (void)renderFramesSession:(BLSHEngineRenderFlipbookSession *)arg1 didRenderFrame:(id <BLSHRenderedFlipbookFrame>)arg2 timedOutEnvironments:(NSArray *)arg3;
- (void)renderFramesSession:(BLSHEngineRenderFlipbookSession *)arg1 failedToRenderSpecifier:(BLSHPresentationDateSpecifier *)arg2 error:(NSError *)arg3 timedOutEnvironments:(NSArray *)arg4;

@end
