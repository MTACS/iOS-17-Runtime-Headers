
@interface CMSkeletonCollection : NSObject {
    double  _globalMachtime;
    double  _localMachtime;
    NSArray * _skeleton2D;
    NSArray * _skeleton3DLifted;
    NSArray * _skeleton3DRetargeted;
}

@property (nonatomic) double globalMachtime;
@property (nonatomic) double localMachtime;
@property (nonatomic, retain) NSArray *skeleton2D;
@property (nonatomic, retain) NSArray *skeleton3DLifted;
@property (nonatomic, retain) NSArray *skeleton3DRetargeted;

- (double)globalMachtime;
- (double)localMachtime;
- (void)setGlobalMachtime:(double)arg1;
- (void)setLocalMachtime:(double)arg1;
- (void)setSkeleton2D:(id)arg1;
- (void)setSkeleton3DLifted:(id)arg1;
- (void)setSkeleton3DRetargeted:(id)arg1;
- (id)skeleton2D;
- (id)skeleton3DLifted;
- (id)skeleton3DRetargeted;

@end
