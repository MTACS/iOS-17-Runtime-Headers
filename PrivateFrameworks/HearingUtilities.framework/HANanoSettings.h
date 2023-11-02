
@interface HANanoSettings : HUHearingAidSettings {
    NPSDomainAccessor * _domainAccessor;
    NPSDomainAccessor * _globalDomainAccessor;
}

@property (nonatomic, retain) NPSDomainAccessor *domainAccessor;
@property (nonatomic, retain) NPSDomainAccessor *globalDomainAccessor;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_valueForPreferenceKey:(id)arg1;
- (id)currentLocale;
- (void)dealloc;
- (id)domainAccessor;
- (id)globalDomainAccessor;
- (id)init;
- (id)nanoDomainAccessor;
- (void)pairedWatchDidChange:(id)arg1;
- (void)setDomainAccessor:(id)arg1;
- (void)setGlobalDomainAccessor:(id)arg1;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (bool)shouldUseiCloud;

@end
