
@interface DebugHierarchyMetaDataAction : DebugHierarchyAbstractRequestAction <DebugHierarchyRequestStandaloneAction> {
    NSArray * _metaDataProviderClassesForEnums;
    bool  _metaDataProviderClassesForEnumsAreExclusive;
    NSArray * _metaDataProviderClassesForOptions;
    bool  _metaDataProviderClassesForOptionsAreExclusive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *metaDataProviderClassesForEnums;
@property bool metaDataProviderClassesForEnumsAreExclusive;
@property (retain) NSArray *metaDataProviderClassesForOptions;
@property bool metaDataProviderClassesForOptionsAreExclusive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)keysToArchiveViaKVC;
- (bool)matchesEnumsForProviderClass:(Class)arg1;
- (bool)matchesOptionsForProviderClass:(Class)arg1;
- (id)metaDataProviderClassesForEnums;
- (bool)metaDataProviderClassesForEnumsAreExclusive;
- (id)metaDataProviderClassesForOptions;
- (bool)metaDataProviderClassesForOptionsAreExclusive;
- (void)performInContext:(id)arg1;
- (void)setMetaDataProviderClassesForEnums:(id)arg1;
- (void)setMetaDataProviderClassesForEnums:(id)arg1 exclusive:(bool)arg2;
- (void)setMetaDataProviderClassesForEnumsAreExclusive:(bool)arg1;
- (void)setMetaDataProviderClassesForOptions:(id)arg1;
- (void)setMetaDataProviderClassesForOptions:(id)arg1 exclusive:(bool)arg2;
- (void)setMetaDataProviderClassesForOptionsAreExclusive:(bool)arg1;

@end
