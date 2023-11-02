
@interface Li3DEngineSceneManager : NSObject {
    NSMutableSet * _appliedForces;
}

@property (nonatomic, readonly) NSMutableSet *appliedForces;

- (id)appliedForces;
- (bool)applyForce:(const void*)arg1 node:(id)arg2 arScale:(float)arg3 objects:(void*)arg4;
- (bool)hasAppliedForce:(id)arg1;
- (id)init;
- (void)resetSim;

@end
