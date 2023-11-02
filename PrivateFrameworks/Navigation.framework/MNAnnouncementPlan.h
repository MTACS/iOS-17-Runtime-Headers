
@interface MNAnnouncementPlan : NSObject {
    double  _distance;
    NSArray * _events;
    NSMutableArray * _plannedEvents;
    double  _speed;
}

@property (nonatomic) double distance;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic, retain) NSMutableArray *plannedEvents;
@property (nonatomic) double speed;

+ (double)desiredTimeGapBetweenEvent:(id)arg1 andEvent:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (double)distance;
- (id)events;
- (id)initWithEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 durations:(id)arg4;
- (id)nextConflict;
- (id)plannedEvents;
- (void)setDistance:(double)arg1;
- (void)setEvents:(id)arg1;
- (void)setPlannedEvents:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)sortEvents;
- (double)speed;

@end
