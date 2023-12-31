
@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem {
    NSMutableSet * _privileges;
}

@property (nonatomic, retain) NSMutableSet *privileges;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addPrivilege:(id)arg1;
- (id)description;
- (bool)hasPrivilegeWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;
- (id)privileges;
- (void)setPrivileges:(id)arg1;

@end
