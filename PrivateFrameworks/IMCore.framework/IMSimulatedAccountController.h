
@interface IMSimulatedAccountController : IMAccountController {
    NSMutableDictionary * _simulatedAccountsPerService;
}

- (void).cxx_destruct;
- (id)activeAccounts;
- (id)activeIMessageAccount;
- (id)activeSMSAccount;
- (id)init;
- (void)setSimulatedAccounts:(id)arg1 forServiceNamed:(id)arg2;

@end
