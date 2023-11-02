
@interface PDCFileBackedConsentStore : NSObject <PDCConsentStore> {
    id /* block */  _changeObserver;
    NSURL * _storeURL;
}

@property (nonatomic, copy) id /* block */ changeObserver;
@property (nonatomic, readonly, copy) NSSet *consentedBundleIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *storeURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeObserver;
- (id)consentRecordURLForBundleIdentifier:(id)arg1;
- (id)consentedBundleIdentifiers;
- (id)initWithConsentStoreURL:(id)arg1;
- (void)setChangeObserver:(id /* block */)arg1;
- (id)storeURL;
- (id)userConsentedRegulatoryDisclosureVersionForBundleIdentifier:(id)arg1;
- (id)writeUserConsentedRegulatoryDisclosureVersion:(id)arg1 forBundleIdentifier:(id)arg2;

@end
