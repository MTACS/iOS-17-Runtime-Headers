
@interface LACUIPackagedViewStateController : NSObject <LACUIPackagedViewPlatformStateControllerDelegate> {
    LACUIPackagedViewStateTransition * _pendingStateTransition;
    <LACUIPackagedViewPlatformStateController> * _stateController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearPendingTransitionWithFlag:(bool)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithPlatformStateController:(id)arg1;
- (void)packagedViewPlatformStateController:(id)arg1 didTransitionToState:(id)arg2 completed:(bool)arg3;
- (void)setState:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
