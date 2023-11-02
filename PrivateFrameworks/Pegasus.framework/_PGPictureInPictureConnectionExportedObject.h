
@interface _PGPictureInPictureConnectionExportedObject : NSObject <PGPictureInPictureExportedInterface> {
    PGPictureInPictureProxy * _pictureInPictureProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)actionButtonTapped;
- (oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(id /* block */)arg1;
- (oneway void)handleCommand:(id)arg1;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)hostedWindowSizeChangeEnded;
- (id)initWithPictureInPictureProxy:(id)arg1;
- (oneway void)pictureInPictureCancelRequestedAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureInvalidated;
- (oneway void)pictureInPictureStartRequestedAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)setResourcesUsageReductionReasons:(unsigned long long)arg1;
- (oneway void)setStashedOrUnderLock:(bool)arg1;
- (oneway void)updateHostedWindowSize:(struct CGSize { double x1; double x2; })arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;
- (oneway void)updatePictureInPicturePossible:(bool)arg1;

@end
