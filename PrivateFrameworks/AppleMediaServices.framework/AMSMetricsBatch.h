
@interface AMSMetricsBatch : NSObject {
    ACAccount * _account;
    bool  _anonymous;
    NSString * _canaryIdentifier;
    bool  _containsLoadURL;
    NSArray * _droppedEvents;
    NSArray * _eventDictionaries;
    NSArray * _events;
    NSURL * _reportURL;
    NSArray * _skippedEvents;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) bool anonymous;
@property (nonatomic, retain) NSString *canaryIdentifier;
@property (nonatomic) bool containsLoadURL;
@property (nonatomic, retain) NSArray *droppedEvents;
@property (nonatomic, retain) NSArray *eventDictionaries;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic, retain) NSURL *reportURL;
@property (nonatomic, retain) NSArray *skippedEvents;

- (void).cxx_destruct;
- (id)account;
- (bool)anonymous;
- (id)canaryIdentifier;
- (bool)containsLoadURL;
- (id)droppedEvents;
- (id)eventDictionaries;
- (id)events;
- (id)reportURL;
- (void)setAccount:(id)arg1;
- (void)setAnonymous:(bool)arg1;
- (void)setCanaryIdentifier:(id)arg1;
- (void)setContainsLoadURL:(bool)arg1;
- (void)setDroppedEvents:(id)arg1;
- (void)setEventDictionaries:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setReportURL:(id)arg1;
- (void)setSkippedEvents:(id)arg1;
- (id)skippedEvents;

@end
