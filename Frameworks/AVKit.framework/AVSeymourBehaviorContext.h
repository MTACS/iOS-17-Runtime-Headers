
@interface AVSeymourBehaviorContext : NSObject <AVBehaviorContext, AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext> {
    id  _behavior;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _legibleContentInsets;
    AVPlayerViewController * _playerViewController;
}

@property (nonatomic) id behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } legibleContentInsets;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateLegibleContentInsets;
- (id)behavior;
- (void)didAddBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (void)hidePlaybackControlsImmediately;
- (id)initWithAVKitOwner:(id)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })legibleContentInsets;
- (id)playerViewController;
- (void)setBehavior:(id)arg1;
- (void)setLegibleContentInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)seymourBehaviorContextDidReceiveButtonTap:(id)arg1;
- (void)viewDidLoad;
- (void)willAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;

@end
