
@interface FAScreenTimeRequestProvider : NSObject <FAScreenTimeRequestProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cacheScreenTimeSettingToDiskWithDSID:(id)arg1 screentimeObject:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)enableScreenTimeSettingsForDSID:(id)arg1 screentimeObject:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateScreenTimeServerFlagSettingsForDSID:(id)arg1 ephemeralAuthResults:(id)arg2 enabled:(bool)arg3 completionHandler:(id /* block */)arg4;

@end
