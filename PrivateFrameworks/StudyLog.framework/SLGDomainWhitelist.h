
@interface SLGDomainWhitelist : NSObject <SLGDomainWhitelisting> {
    bool  _allowUnspecifiedDomains;
    NSObject<OS_dispatch_queue> * _lockQueue;
    NSSet * _whitelist;
}

@property (nonatomic) bool allowUnspecifiedDomains;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *whitelist;

- (void).cxx_destruct;
- (void)_beginObservingSettings;
- (void)_lockQueue_loadSettings;
- (void)_lockQueue_loadUnspecifiedDomains;
- (void)_lockQueue_loadWhitelist;
- (void)_reloadSettings;
- (void)_stopObservingSettings;
- (void)addDomain:(id)arg1;
- (bool)allowUnspecifiedDomains;
- (void)dealloc;
- (id)init;
- (bool)isDomainWhitelisted:(id)arg1;
- (void)removeDomain:(id)arg1;
- (void)setAllowUnspecifiedDomains:(bool)arg1;
- (id)whitelist;

@end
