
@interface STAskForTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

- (id)_createSpecifierForAskForMore:(id)arg1;
- (void)confirmRespondToRequest:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)requestSpecifiers;
- (void)respondToRequest:(id)arg1 withApproval:(bool)arg2 timeApproved:(id)arg3;
- (void)setCoordinator:(id)arg1;

@end
