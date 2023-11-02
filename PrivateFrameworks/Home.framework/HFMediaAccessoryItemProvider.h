
@interface HFMediaAccessoryItemProvider : HFItemProvider <HFMediaAccessoryCommonSettingsDelegate> {
    id /* block */  _filter;
    HMHome * _home;
    bool  _includeContainedProfiles;
    bool  _includeMediaSystems;
    bool  _includeSiriEndPointProfiles;
    NSMutableSet * _mediaAccessoryItems;
    <HFCharacteristicValueSource> * _overrideValueSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) bool includeContainedProfiles;
@property (nonatomic, readonly) bool includeMediaSystems;
@property (nonatomic) bool includeSiriEndPointProfiles;
@property (nonatomic, retain) NSMutableSet *mediaAccessoryItems;
@property (nonatomic, retain) <HFCharacteristicValueSource> *overrideValueSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_siriEndpoints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (bool)includeContainedProfiles;
- (bool)includeMediaSystems;
- (bool)includeSiriEndPointProfiles;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 includeContainedProfiles:(bool)arg2;
- (id)initWithHome:(id)arg1 includeMediaSystems:(bool)arg2;
- (id)initWithHome:(id)arg1 includeSiriEndPointProfiles:(bool)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)mediaAccessoryItems;
- (void)mediaProfileContainer:(id)arg1 didUpdateSettingKeypath:(id)arg2 value:(id)arg3;
- (id)overrideValueSource;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setIncludeContainedProfiles:(bool)arg1;
- (void)setIncludeSiriEndPointProfiles:(bool)arg1;
- (void)setMediaAccessoryItems:(id)arg1;
- (void)setOverrideValueSource:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
