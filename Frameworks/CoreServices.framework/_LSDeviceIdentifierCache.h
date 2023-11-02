
@interface _LSDeviceIdentifierCache : NSObject {
    NSUUID * _advertiserIdentifier;
    NSDictionary * _identifiers;
    NSURL * _identifiersFileURL;
    NSDictionary * _perUserEntropy;
    NSString * _personaUniqueString;
    NSObject<OS_dispatch_queue> * _queue;
    int  _saveFlag;
    NSUUID * _vendorIdentifierSeed;
}

@property (readonly) NSString *personaUniqueString;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)allIdentifiersNotDispatched;
- (id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2;
- (void)clearAllIdentifiersOfType:(long long)arg1;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (id)deviceIdentifierVendorSeed;
- (bool)deviceUnlockedSinceBoot;
- (id)extractUUIDForKey:(id)arg1;
- (void)generatePerUserEntropyIfNeededNotDispatched;
- (id)generateSomePerUserEntropyNotDispatched;
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)identifiersOfTypeNotDispatched:(long long)arg1;
- (id)initWithPersona:(id)arg1;
- (id)personaUniqueString;
- (id)queue;
- (void)save;

@end
