
@interface CLSInspector : NSObject {
    NSArray * _informantClasses;
    NSMutableDictionary * _informantClassesByFamilyIdentifier;
    NSMutableDictionary * _informantClassesByIdentifier;
    NSArray * _profileClasses;
    NSMutableDictionary * _profileClassesByIdentifier;
}

+ (void)invalidateAllSharedCaches;
+ (void)invalidateSharedPersistentCaches;
+ (void)invalidateSharedPersistentCachesForGeoServiceProviderChange;
+ (void)invalidateSharedTransientCaches;
+ (id)sharedInspector;

- (void).cxx_destruct;
- (Class)informantClassForIdentifier:(id)arg1;
- (id)informantClassesForAnyIdentifier:(id)arg1;
- (id)informantClassesForFamilyIdentifier:(id)arg1;
- (id)informantIdentifierForHash:(unsigned long long)arg1;
- (id)informantIdentifiersForAnyIdentifier:(id)arg1;
- (id)init;
- (void)performInvestigation:(id)arg1;
- (void)performInvestigation:(id)arg1 options:(unsigned long long)arg2 progressBlock:(id /* block */)arg3;
- (void)performInvestigation:(id)arg1 progressBlock:(id /* block */)arg2;
- (Class)profileClassForIdentifier:(id)arg1;
- (id)profileIdentifierForHash:(unsigned long long)arg1;

@end
