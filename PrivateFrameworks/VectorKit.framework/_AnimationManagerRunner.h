
@interface _AnimationManagerRunner : NSObject <VKAnimationRunner> {
    void * _animationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (id)initWithAnimationManager:(void*)arg1;

@end
