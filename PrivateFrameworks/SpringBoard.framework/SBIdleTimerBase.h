
@interface SBIdleTimerBase : NSObject <SBIdleTimer, SBIdleTimerActivation> {
    NSHashTable * _observers;
}

@property (getter=isActivated, nonatomic) bool activated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic, readonly) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (void)_logExpirationTimeout:(double)arg1;
- (void)_makeObserversPerformSelector:(SEL)arg1;
- (void)addIdleTimerObserver:(id)arg1;
- (void)conformsToSBIdleTimerActivation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isActivated;
- (bool)isDisabled;
- (bool)isEqualToTimer:(id)arg1;
- (id)observers;
- (void)removeAllIdleTimerObservers;
- (void)removeIdleTimerObserver:(id)arg1;
- (void)reset;
- (void)setActivated:(bool)arg1;
- (id)stateCaptureDescriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
