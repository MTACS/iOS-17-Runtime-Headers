
@interface CalDAVCalendarServerNotificationItem : CoreDAVItem {
    CoreDAVItem * _content;
    CoreDAVLeafItem * _dtstamp;
}

@property (nonatomic, retain) CoreDAVItem *content;
@property (nonatomic, retain) CoreDAVLeafItem *dtstamp;

- (void).cxx_destruct;
- (id)content;
- (id)copyParseRules;
- (id)dtstamp;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setDtstamp:(id)arg1;

@end
