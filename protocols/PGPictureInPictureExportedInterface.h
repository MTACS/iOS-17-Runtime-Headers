
@protocol PGPictureInPictureExportedInterface <NSObject>

@required

- (oneway void)actionButtonTapped;
- (oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)handleCommand:(NSDictionary *)arg1;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)pictureInPictureCancelRequestedAnimated:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)pictureInPictureInvalidated;
- (oneway void)pictureInPictureStartRequestedAnimated:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)pictureInPictureStopRequestedAnimated:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)setResourcesUsageReductionReasons:(unsigned long long)arg1;
- (oneway void)setStashedOrUnderLock:(bool)arg1;
- (oneway void)updateHostedWindowSize:(struct CGSize { double x1; double x2; })arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(BKSAnimationFenceHandle *)arg4;
- (oneway void)updatePictureInPicturePossible:(bool)arg1;

@end
