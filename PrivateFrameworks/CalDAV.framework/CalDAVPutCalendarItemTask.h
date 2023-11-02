
@interface CalDAVPutCalendarItemTask : CoreDAVPutTask {
    NSString * _previousScheduleTag;
}

@property (nonatomic) <CalDAVPutCalendarItemTaskDelegate> *delegate;
@property (nonatomic, retain) NSString *previousScheduleTag;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)description;
- (id)previousScheduleTag;
- (void)setPreviousScheduleTag:(id)arg1;

@end
