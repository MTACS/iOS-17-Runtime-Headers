
@interface SGReminderDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    NSMutableDictionary * _conversations;
    RTRoutineManager * _rtRoutineManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)enrichedTaggedCharacterRangesFromEntity:(id)arg1 forMessage:(id)arg2;
+ (id)enrichedTaggedCharacterRangesFromTaggedCharacterRanges:(id)arg1 messageIsSent:(bool)arg2;
+ (id)getContactIdentifierForName:(id)arg1 andEmail:(id)arg2 ifMatchingPredicate:(id /* block */)arg3;
+ (bool)isReminderDueDateComponentsInPast:(id)arg1 givenReferenceDate:(id)arg2 allDay:(bool)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_detectedReminderEnrichmentFromReminderMessage:(id)arg1 parentEntity:(id)arg2 language:(id)arg3 parentMessage:(id)arg4 startTimeProcessing:(unsigned long long)arg5;
- (bool)_isTestMessage:(id)arg1;
- (id)_reminderEnrichmentWithTitle:(id)arg1 dueDateComponents:(id)arg2 dueLocationType:(unsigned char)arg3 dueLocation:(id)arg4 dueLocationTrigger:(unsigned char)arg5 sourceURL:(id)arg6 reminderStatus:(unsigned char)arg7 parentEntity:(id)arg8 parentMessage:(id)arg9 allDay:(bool)arg10;
- (id)_reminderMessageForTextMessage:(id)arg1 withEntity:(id)arg2 extractionModel:(id)arg3 processingLanguage:(id)arg4 preprocessing:(bool)arg5;
- (id)_testReminder:(id)arg1 entity:(id)arg2;
- (id)_validateDueDateComponents:(id)arg1 dueLocation:(id)arg2 forReminderMessages:(id)arg3;
- (id)conversations;
- (id)defaultDueDateComponentsFromMessages:(id)arg1;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (id)dueDateComponentsFromMessages:(id)arg1;
- (id)dueLocationFromMessages:(id)arg1;
- (id)extractReminderFromMailMessage:(id)arg1 entity:(id)arg2;
- (id)extractReminderFromOwnedMailMessage:(id)arg1 entity:(id)arg2;
- (id)extractReminderFromTextMessage:(id)arg1 entity:(id)arg2 store:(id)arg3;
- (id)fetchLocationOfInterestByType:(long long)arg1 name:(id)arg2;
- (id)init;
- (id)initWithConversations:(id)arg1 rtRoutineManager:(id)arg2;
- (bool)isAllDay:(id)arg1;
- (bool)isValidTextMessageForProcessing:(id)arg1;
- (bool)mailAddressIsAccountOwner:(id)arg1;
- (id)processingLanguageForContent:(id)arg1;
- (id)reminderTitleForContent:(id)arg1;
- (id)reminderTitleFromMessages:(id)arg1 forLanguage:(id)arg2;
- (id)storageLocationFromDueLocation:(id)arg1;

@end
