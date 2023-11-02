
@interface DockKitCore.TrajectoryPoint : NSObject <NSCopying> {
    void positions;
    void time;
    void velocities;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (id)init;
- (id)initWithTime:(double)arg1 positions:(id)arg2 velocities:(id)arg3;

@end
