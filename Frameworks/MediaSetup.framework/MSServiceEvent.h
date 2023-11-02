
@interface MSServiceEvent : NSObject {
    bool  _didSucceed;
    int  _eventType;
    NSUUID * _serviceID;
    MSStopwatch * _stopwatch;
}

@property (nonatomic) bool didSucceed;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic) int eventType;
@property (nonatomic, retain) NSUUID *serviceID;
@property (nonatomic, retain) MSStopwatch *stopwatch;

- (void).cxx_destruct;
- (bool)didSucceed;
- (id)eventName;
- (int)eventType;
- (id)initWithEventType:(int)arg1;
- (id)initWithEventType:(int)arg1 serviceID:(id)arg2;
- (id)initWithEventType:(int)arg1 serviceID:(id)arg2 didSucceed:(bool)arg3;
- (id)serviceID;
- (void)setDidSucceed:(bool)arg1;
- (void)setEventType:(int)arg1;
- (void)setServiceID:(id)arg1;
- (void)setStopwatch:(id)arg1;
- (id)stopwatch;

@end
