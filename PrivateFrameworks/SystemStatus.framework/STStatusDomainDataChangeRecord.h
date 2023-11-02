
@interface STStatusDomainDataChangeRecord : NSObject <BSDebugDescriptionProviding> {
    BSMutableIntegerMap * _cachedCurrentDataByDomain;
    BSMutableIntegerMap * _entriesByDomain;
    BSMutableIntegerMap * _fallbackDataByClientKeyByDomain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BSIntegerSet *domainsWithData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDiff:(id)arg1 forClientKey:(id)arg2 domain:(unsigned long long)arg3;
- (id)currentDataForDomain:(unsigned long long)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)domainsWithData;
- (void)enumerateEntriesByDomainUsingBlock:(id /* block */)arg1;
- (id)fallbackDataForClientKey:(id)arg1 domain:(unsigned long long)arg2;
- (id)init;
- (void)removeAllEntriesForClientKey:(id)arg1 domain:(unsigned long long)arg2;
- (void)setData:(id)arg1 forClientKey:(id)arg2 domain:(unsigned long long)arg3;
- (void)setFallbackData:(id)arg1 forClientKey:(id)arg2 domain:(unsigned long long)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
