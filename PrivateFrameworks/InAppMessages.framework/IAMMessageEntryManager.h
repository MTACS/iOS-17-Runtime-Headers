
@interface IAMMessageEntryManager : NSObject {
    NSArray * _messageEntries;
    NSDictionary * _messageEntriesByContextPropertyTriggers;
    NSDictionary * _messageEntriesByEventTriggers;
    NSDictionary * _messageEntriesByTargetIdentifier;
    NSDictionary * _messageEntriesByUnknownKindTriggers;
    NSDictionary * _messageEntryByIdentifier;
    NSString * _modalTargetIdentifier;
    NSDictionary * _priorityMessageEntryByIdentifier;
}

@property (nonatomic, copy) NSArray *messageEntries;
@property (nonatomic, copy) NSString *modalTargetIdentifier;

+ (void)_addMessageEntry:(id)arg1 toTriggerKeyDictionary:(id)arg2 atKey:(id)arg3;
+ (id)messageEntries:(id)arg1 withSatisfiedPresentationTriggerForTriggerContext:(id)arg2;
+ (id)targetIdentifiersForMessageEntries:(id)arg1;
+ (id)uniqueMessageEntriesInMessageEntriesByTrigger:(id)arg1;

- (void).cxx_destruct;
- (void)_updateMessageIndexes;
- (void)addPriorityMessageEntry:(id)arg1;
- (id)initWithModalTargetIdentifier:(id)arg1;
- (id)messageEntries;
- (id)messageEntriesByTriggerForEventContext:(id)arg1;
- (id)messageEntriesForContextPropertiesContext:(id)arg1;
- (id)messageEntriesForTargetIdentifier:(id)arg1;
- (id)messageEntryForIdentifier:(id)arg1;
- (id)modalTargetIdentifier;
- (id)priorityMessageEntryForIdentifier:(id)arg1;
- (void)setMessageEntries:(id)arg1;
- (void)setModalTargetIdentifier:(id)arg1;

@end
