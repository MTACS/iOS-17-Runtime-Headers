
@interface DockKitCore.RotationalVelocity : NSObject <NSCopying> {
    void _pitchVelocity;
    void _rollVelocity;
    void _yawVelocity;
    void allocatedLock;
}

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)init;

@end
