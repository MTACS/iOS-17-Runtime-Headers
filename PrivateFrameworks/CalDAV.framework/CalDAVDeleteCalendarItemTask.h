
@interface CalDAVDeleteCalendarItemTask : CoreDAVDeleteTask {
    NSString * _previousScheduleTag;
}

@property (nonatomic, retain) NSString *previousScheduleTag;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)description;
- (id)previousScheduleTag;
- (void)setPreviousScheduleTag:(id)arg1;

@end
