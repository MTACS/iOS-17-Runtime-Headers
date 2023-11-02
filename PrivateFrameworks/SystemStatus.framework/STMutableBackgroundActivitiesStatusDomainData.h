
@interface STMutableBackgroundActivitiesStatusDomainData : STBackgroundActivitiesStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (nonatomic, copy) NSArray *attributions;
@property (nonatomic, readonly, copy) STMutableListData *backgroundActivitiesAttributionListData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) STMutableDictionaryData *visualDescriptorsByIdentifierDictionaryData;

- (void)addAttribution:(id)arg1;
- (bool)applyDiff:(id)arg1;
- (id)backgroundActivitiesAttributionListData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBackgroundActivitiesAttributionListData:(id)arg1 visualDescriptorsByIdentifierDictionaryData:(id)arg2;
- (void)removeAttribution:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setVisualDescriptor:(id)arg1 forBackgroundActivityWithIdentifier:(id)arg2;
- (id)visualDescriptorsByIdentifierDictionaryData;

@end
