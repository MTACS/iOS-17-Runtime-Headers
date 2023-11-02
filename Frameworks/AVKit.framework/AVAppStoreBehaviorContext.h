
@interface AVAppStoreBehaviorContext : NSObject <AVBehaviorContext, AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext> {
    AVAppStoreBehavior * _behavior;
    AVPlayerViewController * _playerViewController;
}

@property (nonatomic) AVAppStoreBehavior *behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_toggleControlsGenerationIfPossible;
- (id)behavior;
- (void)didAddBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (id)initWithAVKitOwner:(id)arg1;
- (id)playerViewController;
- (void)setBehavior:(id)arg1;
- (void)willAddBehavior:(id)arg1;
- (void)willEnterFullScreen;
- (void)willExitFullScreen;
- (void)willRemoveBehavior:(id)arg1;

@end
