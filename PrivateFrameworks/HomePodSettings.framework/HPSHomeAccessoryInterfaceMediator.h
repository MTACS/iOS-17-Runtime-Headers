
@interface HPSHomeAccessoryInterfaceMediator : NSObject <HPSHomeAccessorySettingsInterfaceDelegate> {
    HPSHomeAccessorySettingsInterface * _settingsInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HPSHomeAccessorySettingsInterface *settingsInterface;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)homekitaccessoryDidUpdateValueForEndpointIdentifier:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
- (id)initWithInterface:(id)arg1;
- (id)settingsInterface;

@end
