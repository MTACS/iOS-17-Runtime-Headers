
@interface CNMCProfileConnection : NSObject <CNMCProfileConnection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2;
- (id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2;
- (id)observableForManagedConfigChanged;

@end
