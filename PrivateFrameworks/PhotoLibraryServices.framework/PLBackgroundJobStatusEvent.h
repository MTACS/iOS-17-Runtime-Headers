
@interface PLBackgroundJobStatusEvent : NSObject {
    NSDate * _eventTimestamp;
}

@property (retain) NSDate *eventTimestamp;
@property (readonly) NSString *statusDump;

- (void).cxx_destruct;
- (id)eventTimestamp;
- (void)setEventTimestamp:(id)arg1;
- (id)statusDump;

@end
