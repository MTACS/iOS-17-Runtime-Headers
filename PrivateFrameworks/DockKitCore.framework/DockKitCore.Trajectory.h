
@interface DockKitCore.Trajectory : NSObject <NSCopying> {
    void actuators;
    void duration;
    void points;
    void relative;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (id)init;

@end
