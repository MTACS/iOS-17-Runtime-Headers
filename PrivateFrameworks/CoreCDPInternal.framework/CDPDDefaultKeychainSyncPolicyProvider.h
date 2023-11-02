
@interface CDPDDefaultKeychainSyncPolicyProvider : NSObject <CDPDKeychainSyncPolicyProvider, CDPInitUnavailable> {
    CDPDAccount * _account;
    CDPContext * _context;
}

@property (nonatomic, readonly) CDPDAccount *account;
@property (nonatomic, readonly) CDPContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keychainSyncAllowedByMDM;
@property (nonatomic, readonly) bool keychainSyncAllowedByServer;
@property (readonly) Class superclass;
@property (nonatomic) bool userHasExplicitlyDisabledSync;

- (void).cxx_destruct;
- (id)account;
- (id)context;
- (id)initWithContext:(id)arg1;
- (bool)keychainSyncAllowedByMDM;
- (bool)keychainSyncAllowedByServer;
- (void)setUserHasExplicitlyDisabledSync:(bool)arg1;
- (bool)userHasExplicitlyDisabledSync;

@end
