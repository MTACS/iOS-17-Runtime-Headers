
@interface INUpdateEventIntent : INIntent <INUpdateEventIntentExport>

@property (nonatomic, readonly, copy) NSArray *addParticipants;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *removeLocation;
@property (nonatomic, readonly, copy) NSArray *removeParticipants;
@property (nonatomic, readonly, copy) INDateComponentsRange *setDateTimeRange;
@property (nonatomic, readonly, copy) CLPlacemark *setLocation;
@property (nonatomic, readonly, copy) NSString *setTitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *targetEventIdentifier;
@property (nonatomic, readonly, copy) NSNumber *updateAllOccurrences;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)addParticipants;
- (id)domain;
- (id)initWithTargetEventIdentifier:(id)arg1 setTitle:(id)arg2 setDateTimeRange:(id)arg3 setLocation:(id)arg4 addParticipants:(id)arg5 removeParticipants:(id)arg6 updateAllOccurrences:(id)arg7 removeLocation:(id)arg8;
- (id)parametersByName;
- (id)removeLocation;
- (id)removeParticipants;
- (void)setAddParticipants:(id)arg1;
- (id)setDateTimeRange;
- (void)setDomain:(id)arg1;
- (id)setLocation;
- (void)setParametersByName:(id)arg1;
- (void)setRemoveLocation:(id)arg1;
- (void)setRemoveParticipants:(id)arg1;
- (void)setSetDateTimeRange:(id)arg1;
- (void)setSetLocation:(id)arg1;
- (void)setSetTitle:(id)arg1;
- (void)setTargetEventIdentifier:(id)arg1;
- (id)setTitle;
- (void)setUpdateAllOccurrences:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)targetEventIdentifier;
- (id)updateAllOccurrences;
- (id)verb;

@end
