
@interface CalDAVCalendarServerInviteItem : CoreDAVItem {
    NSMutableSet * _users;
}

@property (nonatomic, retain) NSMutableSet *users;

- (void).cxx_destruct;
- (void)addUser:(id)arg1;
- (id)copyParseRules;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)setUsers:(id)arg1;
- (id)users;

@end
