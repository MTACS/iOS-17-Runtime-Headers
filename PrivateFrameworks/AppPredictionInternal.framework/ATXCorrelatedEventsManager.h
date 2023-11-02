
@interface ATXCorrelatedEventsManager : NSObject {
    _PASLock * _correlatedEventsLock;
    Class  _firstEventType;
    ATXCorrelatedEventsDateBuffer * _firstEventTypeDateBuffer;
    Class  _secondEventType;
    ATXCorrelatedEventsDateBuffer * _secondEventTypeDateBuffer;
    _PASLock * _typeAEventDataLock;
    _PASLock * _typeBEventDataLock;
}

@property (nonatomic, readonly) Class firstEventType;
@property (nonatomic, readonly) ATXCorrelatedEventsDateBuffer *firstEventTypeDateBuffer;
@property (nonatomic, readonly) Class secondEventType;
@property (nonatomic, readonly) ATXCorrelatedEventsDateBuffer *secondEventTypeDateBuffer;

+ (bool)eventsOverlapForEventA:(id)arg1 withDateBuffer:(id)arg2 eventB:(id)arg3 withDateBuffer:(id)arg4;

- (void).cxx_destruct;
- (void)correlateEvents;
- (id)correlatedEvents;
- (Class)firstEventType;
- (id)firstEventTypeDateBuffer;
- (id)initWithFirstEventType:(Class)arg1 firstEventTypeDateBuffer:(id)arg2 secondEventType:(Class)arg3 secondEventTypeDateBuffer:(id)arg4;
- (void)insertEvents:(id)arg1 forEventType:(long long)arg2;
- (Class)secondEventType;
- (id)secondEventTypeDateBuffer;

@end
