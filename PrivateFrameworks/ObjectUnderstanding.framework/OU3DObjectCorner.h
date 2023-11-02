
@interface OU3DObjectCorner : NSObject {
    NSMutableArray * _coordinate;
    NSMutableArray * _inView;
    NSMutableArray * _timer;
    NSArray * _timestamp;
    bool  isCompleted;
    double  kCornerLocationThreshold;
    double  kCornerTimerThreshold;
}

@property (retain) NSArray *coordinate;
@property (retain) NSArray *inView;
@property (nonatomic, readonly) bool isCompleted;
@property (retain) NSArray *timestamp;

- (void).cxx_destruct;
- (void)addCornerStatus:(void *)arg1 inView:(void *)arg2 timestamp:(void *)arg3; // needs 3 arg types, found 2: id, id
- (id)coordinate;
- (id)inView;
- (id)init;
- (bool)isCompleted;
- (void)setCoordinate:(id)arg1;
- (void)setInView:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)updateIsCompleted;

@end
