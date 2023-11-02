
@protocol _INPBSearchForNotebookItemsIntent <NSObject>

@required

- (int)StringAsDateSearchType:(NSString *)arg1;
- (int)StringAsItemType:(NSString *)arg1;
- (int)StringAsLocationSearchType:(NSString *)arg1;
- (int)StringAsStatus:(NSString *)arg1;
- (int)StringAsTaskPriority:(NSString *)arg1;
- (int)StringAsTemporalEventTriggerTypes:(NSString *)arg1;
- (void)addTemporalEventTriggerType:(int)arg1;
- (void)clearTemporalEventTriggerTypes;
- (NSString *)content;
- (int)dateSearchType;
- (NSString *)dateSearchTypeAsString:(int)arg1;
- (_INPBDateTimeRange *)dateTime;
- (_INPBDataString *)groupName;
- (bool)hasContent;
- (bool)hasDateSearchType;
- (bool)hasDateTime;
- (bool)hasGroupName;
- (bool)hasIncludeAllNoteContents;
- (bool)hasIntentMetadata;
- (bool)hasItemType;
- (bool)hasLocation;
- (bool)hasLocationSearchType;
- (bool)hasNotebookItemIdentifier;
- (bool)hasStatus;
- (bool)hasTaskPriority;
- (bool)hasTitle;
- (bool)includeAllNoteContents;
- (_INPBIntentMetadata *)intentMetadata;
- (int)itemType;
- (NSString *)itemTypeAsString:(int)arg1;
- (_INPBLocation *)location;
- (int)locationSearchType;
- (NSString *)locationSearchTypeAsString:(int)arg1;
- (NSString *)notebookItemIdentifier;
- (void)setContent:(NSString *)arg1;
- (void)setDateSearchType:(int)arg1;
- (void)setDateTime:(_INPBDateTimeRange *)arg1;
- (void)setGroupName:(_INPBDataString *)arg1;
- (void)setHasDateSearchType:(bool)arg1;
- (void)setHasIncludeAllNoteContents:(bool)arg1;
- (void)setHasItemType:(bool)arg1;
- (void)setHasLocationSearchType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTaskPriority:(bool)arg1;
- (void)setIncludeAllNoteContents:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setItemType:(int)arg1;
- (void)setLocation:(_INPBLocation *)arg1;
- (void)setLocationSearchType:(int)arg1;
- (void)setNotebookItemIdentifier:(NSString *)arg1;
- (void)setStatus:(int)arg1;
- (void)setTaskPriority:(int)arg1;
- (void)setTemporalEventTriggerTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTitle:(_INPBDataString *)arg1;
- (int)status;
- (NSString *)statusAsString:(int)arg1;
- (int)taskPriority;
- (NSString *)taskPriorityAsString:(int)arg1;
- (int)temporalEventTriggerTypeAtIndex:(unsigned long long)arg1;
- (int*)temporalEventTriggerTypes;
- (NSString *)temporalEventTriggerTypesAsString:(int)arg1;
- (unsigned long long)temporalEventTriggerTypesCount;
- (_INPBDataString *)title;

@end
