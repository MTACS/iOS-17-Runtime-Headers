
@interface _MPCPlaybackEngineEventStreamCursor : NSObject <MPCPlaybackEngineEventStreamCursor> {
    MPCPlaybackEngineEvent * _endEvent;
    unsigned long long  _endNS;
    MPCPlaybackEngineEventStream * _eventStream;
    MPCPlaybackEngineEvent * _startEvent;
    unsigned long long  _startNS;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPCPlaybackEngineEvent *endEvent;
@property (nonatomic, readonly) MPCPlaybackEngineEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPCPlaybackEngineEvent *startEvent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)countOfPreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2;
- (long long)countOfPreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2;
- (id)cursorFromEvent:(id)arg1 untilEvent:(id)arg2;
- (id)cursorUntilEvent:(id)arg1;
- (id)description;
- (id)endEvent;
- (void)enumeratePreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumeratePreviousEventsWithType:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumeratePreviousEventsWithTypes:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)eventStream;
- (id)findPreviousEventWithType:(id)arg1 matchingPayload:(id)arg2;
- (id)findPreviousEventWithTypes:(id)arg1 matchingPayload:(id)arg2;
- (id)initWithEventStream:(id)arg1 startEvent:(id)arg2 endEvent:(id)arg3;
- (id)startEvent;

@end
