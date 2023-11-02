
@interface AMSUIWebJSProperties : NSObject {
    AMSUIWebClientContext * _context;
    <AMSUIWebJSPropertiesDelegate> * _delegate;
    NSDictionary * _lastAccountsExport;
}

@property (nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) <AMSUIWebJSPropertiesDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *lastAccountsExport;

- (void).cxx_destruct;
- (id)_accessibilityProperties;
- (void)_accessibilityPropertiesDidChange:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (id)_accountsProperties;
- (id)_appearanceProperties;
- (id)_appearancePropertiesDictionary;
- (id)_clientOptionsProperties;
- (id)_deviceProperties;
- (id)_hexStringFromColor:(id)arg1;
- (void)_lastConnectionReportDidChange:(id)arg1;
- (id)_pluginProperties;
- (id)_processProperties;
- (id)_propertiesForClientInfo:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)generateProperties;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)lastAccountsExport;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastAccountsExport:(id)arg1;

@end
