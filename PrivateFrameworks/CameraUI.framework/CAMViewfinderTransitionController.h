
@interface CAMViewfinderTransitionController : NSObject {
    CAMViewfinderFlipTransition * __flipTransition;
    CAMViewfinderOpenAndCloseTransition * __openAndCloseTransition;
    <CAMViewfinderTransitionable> * _target;
}

@property (setter=_setFlipTransition:, nonatomic, retain) CAMViewfinderFlipTransition *_flipTransition;
@property (setter=_setOpenAndCloseTransition:, nonatomic, retain) CAMViewfinderOpenAndCloseTransition *_openAndCloseTransition;
@property (nonatomic) <CAMViewfinderTransitionable> *target;

- (void).cxx_destruct;
- (id)_flipTransition;
- (id)_openAndCloseTransition;
- (void)_setFlipTransition:(id)arg1;
- (void)_setOpenAndCloseTransition:(id)arg1;
- (void)closeAndRotateWithDirection:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)closeWithBlur:(bool)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)handleApplicationDidEnterBackground;
- (void)openForReason:(long long)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTarget:(id)arg1;
- (id)target;

@end
