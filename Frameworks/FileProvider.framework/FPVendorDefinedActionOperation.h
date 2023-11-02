
@interface FPVendorDefinedActionOperation : FPActionOperation {
    NSString * _actionIdentifier;
    NSString * _domainIdentifier;
    NSArray * _itemIdentifiers;
    NSProgress * _remoteProgress;
}

- (void).cxx_destruct;
- (void)actionMain;
- (void)cancel;
- (id)initWithActionIdentifier:(id)arg1 providerDomainID:(id)arg2 itemIdentifiers:(id)arg3;

@end
