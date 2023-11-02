
@interface SecLaunchSequence : NSObject {
    NSMutableDictionary * _attributes;
    NSMutableDictionary * _dependantLaunches;
    NSMutableDictionary * _events;
    bool  _firstLaunch;
    NSBlockOperation * _launchOperation;
    bool  _launched;
    NSString * _name;
}

@property (retain) NSMutableDictionary *attributes;
@property (retain) NSMutableDictionary *dependantLaunches;
@property (retain) NSMutableDictionary *events;
@property bool firstLaunch;
@property (retain) NSBlockOperation *launchOperation;
@property bool launched;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (void)addDependantLaunch:(id)arg1 child:(id)arg2;
- (void)addEvent:(id)arg1;
- (id)attributes;
- (id)dependantLaunches;
- (id)events;
- (id)eventsByTime;
- (id)eventsRelativeTime;
- (bool)firstLaunch;
- (id)initWithRocketName:(id)arg1;
- (void)launch;
- (id)launchOperation;
- (bool)launched;
- (id)metricsReport;
- (id)name;
- (void)setAttributes:(id)arg1;
- (void)setDependantLaunches:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setFirstLaunch:(bool)arg1;
- (void)setLaunchOperation:(id)arg1;
- (void)setLaunched:(bool)arg1;
- (void)setName:(id)arg1;

@end
