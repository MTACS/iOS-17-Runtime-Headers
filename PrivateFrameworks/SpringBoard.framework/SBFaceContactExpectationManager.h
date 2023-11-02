
@interface SBFaceContactExpectationManager : NSObject {
    bool  _faceExpected;
    SBProximitySensorManager * _proximitySensorManager;
    SBSceneManager * _sceneManager;
}

- (void).cxx_destruct;
- (id)_frontmostScenesExpectingFaceContactAndGetShouldDisableGracePeriod:(out bool*)arg1;
- (id)_proximitySensorClientID;
- (bool)_sceneHasBypassEntitlement:(id)arg1;
- (id)description;
- (id)initWithSceneManager:(id)arg1;
- (id)initWithSceneManager:(id)arg1 proximitySensorManager:(id)arg2;
- (void)updateFaceContactExpectation;

@end
