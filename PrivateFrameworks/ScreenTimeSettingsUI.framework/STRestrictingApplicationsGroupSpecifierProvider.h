
@interface STRestrictingApplicationsGroupSpecifierProvider : STRootGroupSpecifierProvider {
    NSArray * _authorizationRecords;
}

@property (copy) NSArray *authorizationRecords;

- (void).cxx_destruct;
- (void)_updateSpecifiersWithAuthorizationRecords;
- (id)authorizationRecords;
- (long long)getAuthorizationStatusForRecordIdentifier:(id)arg1 fromRecords:(id)arg2;
- (id)init;
- (id)isFamilyControlsEnabled:(id)arg1;
- (void)setAuthorizationRecords:(id)arg1;
- (void)setFamilyControlsEnabled:(id)arg1 forSpecifier:(id)arg2;

@end
