
@interface BLSHSceneEnvironmentObserver : NSObject <FBSceneObserver> {
    <BLSHSceneEnvironmentObserving> * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)observerWithObserver:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObserver:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;

@end
