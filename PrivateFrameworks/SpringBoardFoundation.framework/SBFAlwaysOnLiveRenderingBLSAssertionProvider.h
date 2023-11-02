
@interface SBFAlwaysOnLiveRenderingBLSAssertionProvider : NSObject <SBFAlwaysOnLiveRenderingBLSAssertionProvider> {
    <BLSAssertionObserving> * _assertionObserver;
    NSMapTable * _assertions;
}

@property (nonatomic) <BLSAssertionObserving> *assertionObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)acquireWithExplanation:(id)arg1 attributes:(id)arg2;
- (long long)acquiredAssertionsCount;
- (void)assertion:(id)arg1 didCancelWithError:(id)arg2;
- (id)assertionObserver;
- (void)assertionWasAcquired:(id)arg1;
- (id)init;
- (void)setAssertionObserver:(id)arg1;

@end
