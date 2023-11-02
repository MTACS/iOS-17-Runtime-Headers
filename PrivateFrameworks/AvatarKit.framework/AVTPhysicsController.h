
@interface AVTPhysicsController : NSObject {
    <AVTPhysicsControllerDelegate> * _delegate;
    unsigned int  _frameCount;
    bool  _hasPhysicsStateOverride;
    bool  _physicsBehaviorsAreInstalledInPhysicsWorld;
    NSArray * _physicsRigs;
    SCNPhysicsWorld * _physicsWorld;
    bool  _setupDone;
}

@property (nonatomic) <AVTPhysicsControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_setupCollisionNode:(id)arg1;
- (void)_setupPhysicsChain:(id)arg1 physicsRigs:(id)arg2;
- (void)addToPhysicsWorld:(id)arg1;
- (void)applyForcesWithMultiplier:(double)arg1;
- (id)delegate;
- (void)downforcesDidChange;
- (void)installPhysics;
- (void)offsetFromRestingPositionForNode:(id)arg1 inCoordinateSpaceOfNode:(id)arg2;
- (id)physicsState;
- (void)removeFromPhysicsWorld:(id)arg1;
- (void)resetToPhysicsState:(id)arg1 assumeRestStateIfNil:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setupPhysics;
- (void)setupPhysicsIfNeeded;
- (void)updateAtTime:(double)arg1 forceMultiplier:(double)arg2;

@end
