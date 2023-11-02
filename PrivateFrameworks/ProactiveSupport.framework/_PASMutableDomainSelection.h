
@interface _PASMutableDomainSelection : _PASDomainSelection {
    unsigned long long  _count;
    NSMutableDictionary * _domains;
    bool  _taintedByDeepDomain;
}

- (void).cxx_destruct;
- (bool)_addDomainsFrom:(id)arg1;
- (bool)_addDomainsFromOtherDictionary:(id)arg1 toOwnDictionary:(id)arg2 ownDictionaryIsPlaceholder:(bool)arg3;
- (void)_decrementCountAndMaybePruneItems:(id)arg1;
- (id)_initWithNonOverlappingDomainSet:(id)arg1;
- (bool)addDomain:(id)arg1;
- (bool)addDomainsFromArray:(id)arg1;
- (bool)addDomainsFromSelection:(id)arg1;
- (bool)addDomainsFromSet:(id)arg1;
- (id)allDomains;
- (bool)containsDomain:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (bool)isEmpty;
- (bool)isEqualToDomainSelection:(id)arg1;

@end
