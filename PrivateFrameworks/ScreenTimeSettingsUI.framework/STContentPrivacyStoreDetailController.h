
@interface STContentPrivacyStoreDetailController : STPINListViewController {
    STContentPrivacyListController * _contentPrivacyController;
}

@property STContentPrivacyListController *contentPrivacyController;

- (void).cxx_destruct;
- (void)_isLoadedDidChange:(bool)arg1;
- (id)contentPrivacyController;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setContentPrivacyController:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
