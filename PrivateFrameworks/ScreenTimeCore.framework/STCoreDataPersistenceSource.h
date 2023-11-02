
@interface STCoreDataPersistenceSource : NSObject <STPersistenceSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_coreUserForIdentifier:(id)arg1 inContext:(id)arg2;
- (void)saveCommunicationSafetySettingsForDSID:(id)arg1 checkForUnsafePhotos:(bool)arg2 communicationSafetyNotificationEnabled:(bool)arg3 communicationSafetyAnalyticsEnabled:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)userDataWithIdentifier:(id)arg1;

@end
