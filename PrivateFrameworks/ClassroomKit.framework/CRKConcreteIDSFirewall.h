
@interface CRKConcreteIDSFirewall : NSObject <CRKIDSFirewall> {
    IDSFirewall * _underlyingFirewall;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IDSFirewall *underlyingFirewall;

+ (id)appleIDFromFirewallEntry:(id)arg1;
+ (id)firewallEntryForAppleID:(id)arg1;

- (void).cxx_destruct;
- (void)addAllowedAppleIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllowedAppleIDsWithCompletion:(id /* block */)arg1;
- (id)initWithUnderlyingFirewall:(id)arg1;
- (void)removeAllowedAppleIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)underlyingFirewall;

@end
