
@interface CalDAVPostCalendarItemTask : CoreDAVPostTask {
    NSString * _previousScheduleTag;
}

@property (nonatomic) <CalDAVPostCalendarItemTaskDelegate> *delegate;
@property (nonatomic, retain) NSString *previousScheduleTag;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)previousScheduleTag;
- (void)setPreviousScheduleTag:(id)arg1;

@end
