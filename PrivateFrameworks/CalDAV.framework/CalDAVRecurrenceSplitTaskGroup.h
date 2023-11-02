
@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup {
    NSArray * _actions;
    NSURL * _folderURL;
}

@property (nonatomic) <CalDAVRecurrenceSplitTaskGroupDelegate> *delegate;

- (void).cxx_destruct;
- (id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;
- (void)startTaskGroup;

@end
