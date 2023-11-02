
@interface HMDAppleMediaAccessoryDeleteSiriHistoryOperation : HMFOperation <HMFLogging> {
    AFSettingsConnection * _settingsConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) AFSettingsConnection *settingsConnection;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithSettingsConnection:(id)arg1;
- (void)main;
- (id)settingsConnection;

@end
