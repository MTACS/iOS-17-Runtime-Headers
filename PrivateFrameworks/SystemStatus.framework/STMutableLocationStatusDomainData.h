
@interface STMutableLocationStatusDomainData : STLocationStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (nonatomic) unsigned long long activeDisplayModes;
@property (nonatomic, copy) NSArray *attributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) STMutableListData *locationAttributionListData;
@property (nonatomic, copy) NSArray *locationAttributions;
@property (readonly) Class superclass;

- (void)addAttribution:(id)arg1;
- (void)addLocationAttribution:(id)arg1;
- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithLocationAttributionListData:(id)arg1 activeDisplayModes:(unsigned long long)arg2;
- (id)locationAttributionListData;
- (void)removeAttribution:(id)arg1;
- (void)removeLocationAttribution:(id)arg1;
- (void)setActiveDisplayModes:(unsigned long long)arg1;
- (void)setAttributions:(id)arg1;
- (void)setLocationAttributions:(id)arg1;

@end
