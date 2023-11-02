
@interface REMAccountGroupContext : NSObject {
    REMAccount * _account;
}

@property (nonatomic, retain) REMAccount *account;

- (void).cxx_destruct;
- (id)account;
- (id)fetchGroupsWithError:(id*)arg1;
- (id)initWithAccount:(id)arg1;
- (void)setAccount:(id)arg1;

@end
