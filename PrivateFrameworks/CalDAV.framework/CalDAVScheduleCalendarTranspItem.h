
@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {
    CoreDAVItemWithNoChildren * _transparent;
}

@property (nonatomic, readonly) bool isScheduleTransparent;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *transparent;

- (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;
- (bool)isScheduleTransparent;
- (void)setTransparent:(id)arg1;
- (id)transparent;

@end
