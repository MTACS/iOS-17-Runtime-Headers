
@interface DockKitCore.Orientation : NSObject <NSCopying> {
    void _pitch;
    void _roll;
    void _yaw;
    void allocatedLock;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (id)init;

@end
