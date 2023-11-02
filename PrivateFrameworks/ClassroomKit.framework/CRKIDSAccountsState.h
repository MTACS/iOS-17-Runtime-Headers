
@interface CRKIDSAccountsState : NSObject {
    NSSet * _activeLoginIDs;
    NSSet * _inactiveLoginIDs;
}

@property (nonatomic, readonly, copy) NSSet *activeLoginIDs;
@property (nonatomic, readonly, copy) NSDictionary *debugInfo;
@property (nonatomic, readonly, copy) NSSet *inactiveLoginIDs;
@property (nonatomic, readonly) unsigned long long summary;

+ (id)stateForAccounts:(id)arg1;

- (void).cxx_destruct;
- (id)activeLoginIDs;
- (id)debugInfo;
- (id)description;
- (id)inactiveLoginIDs;
- (id)init;
- (id)initWithActiveLoginIDs:(id)arg1 inactiveLoginIDs:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)summary;

@end
