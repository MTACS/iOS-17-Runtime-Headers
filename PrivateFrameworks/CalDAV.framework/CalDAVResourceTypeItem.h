
@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem {
    CoreDAVItemWithNoChildren * _calendar;
    CoreDAVItemWithNoChildren * _isFamilyCalendar;
    CoreDAVItemWithNoChildren * _notification;
    CoreDAVItemWithNoChildren * _scheduleInbox;
    CoreDAVItemWithNoChildren * _scheduleOutbox;
    CoreDAVItemWithNoChildren * _sharedOwner;
    CoreDAVItemWithNoChildren * _subscribed;
}

@property (nonatomic, retain) CoreDAVItemWithNoChildren *calendar;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *isFamilyCalendar;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *notification;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *scheduleInbox;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *scheduleOutbox;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *sharedOwner;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *subscribed;

- (void).cxx_destruct;
- (id)calendar;
- (id)copyParseRules;
- (id)isFamilyCalendar;
- (id)notification;
- (id)scheduleInbox;
- (id)scheduleOutbox;
- (void)setCalendar:(id)arg1;
- (void)setIsFamilyCalendar:(id)arg1;
- (void)setNotification:(id)arg1;
- (void)setScheduleInbox:(id)arg1;
- (void)setScheduleOutbox:(id)arg1;
- (void)setSharedOwner:(id)arg1;
- (void)setSubscribed:(id)arg1;
- (id)sharedOwner;
- (id)subscribed;
- (void)write:(id)arg1;

@end
