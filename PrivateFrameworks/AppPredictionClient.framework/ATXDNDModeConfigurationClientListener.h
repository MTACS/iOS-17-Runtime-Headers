
@interface ATXDNDModeConfigurationClientListener : NSObject <DNDModeConfigurationServiceListener> {
    <ATXDNDModeConfigurationClientListenerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXDNDModeConfigurationClientListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
