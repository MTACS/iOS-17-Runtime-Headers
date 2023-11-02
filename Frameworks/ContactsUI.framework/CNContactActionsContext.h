
@interface CNContactActionsContext : NSObject {
    CNUIUserActionListDataSource * _dataSource;
    CNUIContactsEnvironment * _environment;
}

@property (readonly) CNUIUserActionListDataSource *dataSource;
@property (readonly) CNUIContactsEnvironment *environment;

- (void).cxx_destruct;
- (id)dataSource;
- (id)description;
- (id)environment;
- (id)init;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2;
- (void)setCacheEntryExpirationAge:(double)arg1;
- (void)setCacheEntryLimit:(unsigned long long)arg1;
- (void)setCacheEntryRefreshAge:(double)arg1;

@end
