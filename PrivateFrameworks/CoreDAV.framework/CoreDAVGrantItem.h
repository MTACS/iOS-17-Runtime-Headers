
@interface CoreDAVGrantItem : CoreDAVItem {
    NSMutableSet * _privileges;
}

@property (nonatomic, retain) NSMutableSet *privileges;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addPrivilege:(id)arg1;
- (id)description;
- (id)init;
- (id)privileges;
- (void)setPrivileges:(id)arg1;
- (void)write:(id)arg1;

@end
