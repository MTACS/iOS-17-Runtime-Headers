
@interface LACUIPackagedViewPlatformStateController : NSObject <CAStateControllerDelegate, LACUIPackagedViewPlatformStateController> {
    <LACUIPackagedViewPlatformStateControllerDelegate> * _delegate;
    CAStateController * _stateController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LACUIPackagedViewPlatformStateControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (bool)hasState:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(id)arg1 speed:(double)arg2;
- (id)state;
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(bool)arg3;

@end
