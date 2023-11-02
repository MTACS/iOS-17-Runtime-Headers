
@interface INSearchForNotebookItemsIntent : INIntent <INSearchForNotebookItemsIntentExport>

@property (nonatomic, readonly, copy) NSString *content;
@property (nonatomic, readonly) long long dateSearchType;
@property (nonatomic, readonly, copy) INDateComponentsRange *dateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeAllNoteContents;
@property (nonatomic, readonly) long long itemType;
@property (nonatomic, readonly, copy) CLPlacemark *location;
@property (nonatomic, readonly) long long locationSearchType;
@property (nonatomic, readonly, copy) NSString *notebookItemIdentifier;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long taskPriority;
@property (nonatomic, readonly) unsigned long long temporalEventTriggerTypes;
@property (nonatomic, readonly, copy) INSpeakableString *title;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)content;
- (long long)dateSearchType;
- (id)dateTime;
- (id)domain;
- (id)groupName;
- (bool)includeAllNoteContents;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 notebookItemIdentifier:(id)arg9;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 temporalEventTriggerTypes:(unsigned long long)arg9 taskPriority:(long long)arg10 notebookItemIdentifier:(id)arg11;
- (long long)itemType;
- (id)location;
- (long long)locationSearchType;
- (id)notebookItemIdentifier;
- (id)parametersByName;
- (void)setContent:(id)arg1;
- (void)setDateSearchType:(long long)arg1;
- (void)setDateTime:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIncludeAllNoteContents:(bool)arg1;
- (void)setItemType:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationSearchType:(long long)arg1;
- (void)setNotebookItemIdentifier:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTaskPriority:(long long)arg1;
- (void)setTemporalEventTriggerTypes:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setVerb:(id)arg1;
- (long long)status;
- (long long)taskPriority;
- (unsigned long long)temporalEventTriggerTypes;
- (id)title;
- (id)verb;

@end
