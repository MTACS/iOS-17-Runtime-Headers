
@interface CalDAVReportJunkTaskGroup : CoreDAVTaskGroup {
    NSArray * _reportJunkActions;
}

@property (nonatomic) <CalDAVReportJunkTaskGroupDelegate> *delegate;

- (void).cxx_destruct;
- (id)initWithReportJunkActions:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;
- (void)startTaskGroup;

@end
