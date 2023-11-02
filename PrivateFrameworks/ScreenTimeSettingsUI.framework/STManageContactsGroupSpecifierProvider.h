
@interface STManageContactsGroupSpecifierProvider : STRootGroupSpecifierProvider {
    PSSpecifier * _manageContactsRequestSpecifier;
}

@property (retain) PSSpecifier *manageContactsRequestSpecifier;

- (void).cxx_destruct;
- (void)_communicationLimitsDidChange:(id)arg1;
- (void)_showManageContactsRequestAlert:(id)arg1;
- (void)_updateContactManagementState:(long long)arg1;
- (id)init;
- (id)manageContactsRequestSpecifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCoordinator:(id)arg1;
- (void)setManageContactsRequestSpecifier:(id)arg1;

@end
