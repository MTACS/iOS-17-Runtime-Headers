
@protocol CNMCProfileConnection <NSObject>

@required

- (bool)communicationServiceRulesExistForBundleID:(NSString *)arg1 forCommunicationServiceType:(NSString *)arg2;
- (NSString *)defaultAppBundleIDForCommunicationServiceType:(NSString *)arg1 forAccountWithIdentifier:(NSString *)arg2;
- (CNObservable *)observableForManagedConfigChanged;

@end
