
@interface CalDAVCalendarServerAccessItem : CoreDAVItem {
    CoreDAVItemWithNoChildren * _accessLevel;
}

@property (nonatomic, retain) CoreDAVItemWithNoChildren *accessLevel;

- (void).cxx_destruct;
- (id)accessLevel;
- (id)copyParseRules;
- (id)init;
- (id)initWithAccess:(int)arg1;
- (void)setAccessLevel:(id)arg1;

@end
