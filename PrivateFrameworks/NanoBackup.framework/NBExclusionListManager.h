
@interface NBExclusionListManager : NSObject {
    NSMutableDictionary * _excludedPerGizmoDomainSettings;
    NSSet * _excludedPerGizmoDomains;
    bool  _hasReadConfiguration;
}

@property (nonatomic, retain) NSMutableDictionary *excludedPerGizmoDomainSettings;
@property (nonatomic, retain) NSSet *excludedPerGizmoDomains;
@property (nonatomic) bool hasReadConfiguration;

- (void).cxx_destruct;
- (id)excludedKeysInDomain:(id)arg1;
- (id)excludedPerGizmoDomainSettings;
- (id)excludedPerGizmoDomains;
- (bool)hasReadConfiguration;
- (void)purgeCache;
- (void)readConfigurationIfNeeded;
- (void)setExcludedPerGizmoDomainSettings:(id)arg1;
- (void)setExcludedPerGizmoDomains:(id)arg1;
- (void)setHasReadConfiguration:(bool)arg1;

@end
