
@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem {
    CalDAVCalendarServerActionItem * _action;
    CoreDAVLeafItem * _dtstamp;
}

@property (nonatomic, retain) CalDAVCalendarServerActionItem *action;
@property (nonatomic, retain) CoreDAVLeafItem *dtstamp;

- (void).cxx_destruct;
- (id)action;
- (id)copyParseRules;
- (id)dtstamp;
- (id)init;
- (void)setAction:(id)arg1;
- (void)setDtstamp:(id)arg1;

@end
