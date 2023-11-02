
@interface CRKASMConcreteUserFetcher : NSObject <CRKASMUserFetching> {
    <CRKClassKitRosterRequirements> * _rosterRequirements;
}

@property (nonatomic, readonly) <CRKClassKitRosterRequirements> *rosterRequirements;

- (void).cxx_destruct;
- (void)fetchASMUsersWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithRosterRequirements:(id)arg1;
- (id)rosterRequirements;

@end
