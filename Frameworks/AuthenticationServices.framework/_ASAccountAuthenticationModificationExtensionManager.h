
@interface _ASAccountAuthenticationModificationExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> * _dataConstructionQueue;
    NSDictionary * _domainToExtension;
    bool  _errorEncounteredDuringLastExtensionDiscovery;
    id  _extensionMatchingToken;
    NSArray * _extensions;
    NSUserDefaults * _mobileSafariUserDefaults;
    NSMutableOrderedSet * _observers;
    NSObject<OS_dispatch_queue> * _readOnlyQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_beginExtensionDiscovery;
- (void)_buildDomainToExtensionDictionaryWithSharedWebCredentialsDatabaseEntries:(id)arg1;
- (void)_endExtensionDiscovery;
- (void)_notifyObservers:(id)arg1;
- (void)addChangeObserver:(id)arg1;
- (void)dealloc;
- (void)extensionForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)removeChangeObserver:(id)arg1;

@end
