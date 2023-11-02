
@interface CalDAVScheduleTask : CoreDAVPostTask {
    NSArray * _attendees;
    NSString * _originator;
    CalDAVScheduleResponseItem * _scheduleResponse;
}

@property (nonatomic, retain) NSArray *attendees;
@property (nonatomic, retain) NSString *originator;
@property (nonatomic, retain) CalDAVScheduleResponseItem *scheduleResponse;

- (void).cxx_destruct;
- (id)attendees;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4;
- (id)originator;
- (id)scheduleResponse;
- (void)setAttendees:(id)arg1;
- (void)setOriginator:(id)arg1;
- (void)setScheduleResponse:(id)arg1;

@end
