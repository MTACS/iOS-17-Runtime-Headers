
@interface _SFContentBlockersPreferenceManager : WBSContentBlockersPreferenceManager <SFContentBlockerManagerObserver> {
    SFWebExtensionsController * _extensionsController;
    bool  _hasEnabledContentBlockers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasEnabledContentBlockers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkForContentBlockers;
- (void)contentBlockerManagerExtensionListDidChange:(id)arg1;
- (bool)hasEnabledContentBlockers;
- (id)initWithPerSitePreferencesStore:(id)arg1 extensionsController:(id)arg2;
- (void)invalidate;

@end
