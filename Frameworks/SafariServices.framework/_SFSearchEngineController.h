
@interface _SFSearchEngineController : NSObject <WBSSearchProviderContext> {
    NSDictionary * _carrierTemplateParameterValues;
    NSString * _countryCode;
    _SFSearchEngineInfo * _defaultSearchEngine;
    unsigned long long  _defaultSearchEngineIndex;
    long long  _deviceType;
    _SFSearchEngineInfo * _privateSearchEngine;
    unsigned long long  _privateSearchEngineIndex;
    NSArray * _searchEngines;
    NSObject<OS_dispatch_queue> * _searchEnginesQueue;
    NSString * _systemLanguage;
    NSDictionary * _templateParameterValues;
}

@property (nonatomic, readonly, copy) NSDictionary *carrierTemplateParameterValues;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <WBSSearchProvider> *defaultSeachProviderForPrivateBrowsing;
@property (nonatomic, readonly) <WBSSearchProvider> *defaultSearchProvider;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly, copy) NSArray *engines;
@property (nonatomic, readonly, copy) NSArray *enginesAvailableForUnifiedFieldSearching;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isChinaDevice;
@property (nonatomic, readonly, copy) NSArray *searchEngineNames;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *systemLanguage;
@property (nonatomic, readonly, copy) NSDictionary *templateParameterValues;

+ (bool)_deviceRegionCodeIsChina;
+ (void)_initializeSharedInstance;
+ (void)loadSystemLanguageProperties;
+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;

- (void).cxx_destruct;
- (void)_addAllWebSearchEngineInfosToArray:(id)arg1 andAddUserVisibleWebSearchEngineInfosToArray:(id)arg2;
- (id)_existingEngineInfoFor:(id)arg1;
- (void)_getEngines:(id*)arg1 defaultSearchEngineIndex:(unsigned long long*)arg2 forPrivateBrowsing:(bool)arg3;
- (void)_loadSystemPropertiesForSearchEngine:(id)arg1;
- (void)_populateSearchEngines;
- (void)_postDefaultSearchEngineDidChange;
- (void)_setDefaultSearchEngine:(id)arg1 forPrivateBrowsing:(bool)arg2;
- (void)_setEngines:(id)arg1 defaultSearchEngineIndex:(unsigned long long)arg2 forPrivateBrowsing:(bool)arg3;
- (id)_specialSearchEngines;
- (id)carrierTemplateParameterValues;
- (id)countryCode;
- (id)defaultSeachProviderForPrivateBrowsing;
- (id)defaultSearchEngine;
- (id)defaultSearchEngineForPrivateBrowsing:(bool)arg1;
- (id)defaultSearchEngineIfPopulatedForPrivateBrowsing:(bool)arg1;
- (id)defaultSearchEngineNameForPrivateBrowsing:(bool)arg1;
- (id)defaultSearchProvider;
- (id)description;
- (long long)deviceType;
- (id)engineInfoFor:(id)arg1;
- (id)engineInfoForScriptName:(id)arg1;
- (id)engines;
- (id)enginesAvailableForUnifiedFieldSearching;
- (id)init;
- (bool)isChinaDevice;
- (bool)isSearchProviderEnabled:(unsigned long long)arg1;
- (void)reloadSearchEngines;
- (id)safeSearchRequestForSearchRequest:(id)arg1;
- (id)searchEngineNames;
- (void)setDefaultSearchEngine:(id)arg1 forPrivateBrowsing:(bool)arg2;
- (id)systemLanguage;
- (id)templateParameterValues;

@end
