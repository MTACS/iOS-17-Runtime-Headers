
@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject <CADManagedConfigurationHandler> {
    MCProfileConnection * _connection;
}

@property (nonatomic, readonly) MCProfileConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
- (id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3;
- (id)initWithMCProfileConnection:(id)arg1;
- (bool)isOpenInRestrictionInEffect;
- (bool)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (bool)mayShowLocalAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2;

@end
