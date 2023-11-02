
@interface STMutableCallingStatusDomainData : STCallingStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (nonatomic, copy) NSSet *activeCallAttributions;
@property (nonatomic, copy) NSSet *activeVideoConferenceAttributions;
@property (nonatomic, readonly, copy) STMutableListData *callDescriptorListData;
@property (nonatomic, copy) NSArray *callDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *ringingCallAttributions;
@property (nonatomic, copy) NSSet *ringingVideoConferenceAttributions;
@property (readonly) Class superclass;

- (void)addActiveCallAttribution:(id)arg1;
- (void)addActiveVideoConferenceAttribution:(id)arg1;
- (void)addCallDescriptor:(id)arg1;
- (void)addRingingCallAttribution:(id)arg1;
- (void)addRingingVideoConferenceAttribution:(id)arg1;
- (bool)applyDiff:(id)arg1;
- (id)callDescriptorListData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCallDescriptorListData:(id)arg1;
- (void)removeActiveCallAttribution:(id)arg1;
- (void)removeActiveVideoConferenceAttribution:(id)arg1;
- (void)removeCallDescriptor:(id)arg1;
- (void)removeRingingCallAttribution:(id)arg1;
- (void)removeRingingVideoConferenceAttribution:(id)arg1;
- (void)setActiveCallAttributions:(id)arg1;
- (void)setActiveVideoConferenceAttributions:(id)arg1;
- (void)setCallDescriptors:(id)arg1;
- (void)setRingingCallAttributions:(id)arg1;
- (void)setRingingVideoConferenceAttributions:(id)arg1;

@end
