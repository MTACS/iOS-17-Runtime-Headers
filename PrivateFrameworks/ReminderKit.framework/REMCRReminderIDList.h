
@interface REMCRReminderIDList : NSObject <CRUndoDelegate, REMObjectIDProviding> {
    NSObject<REMCRReminderIDListDelegate> * _delegate;
    CRDocument * _document;
    REMObjectID * _remObjectID;
    CRTombstoneOrderedSet * _reminderIDsStorage;
    NSUUID * _replica;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<REMCRReminderIDListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) REMObjectID *remObjectID;
@property (nonatomic, readonly) NSMutableOrderedSet *reminderIDsProxy;
@property (nonatomic, readonly) NSUUID *replica;
@property (readonly) Class superclass;

+ (id)cdEntityName;
+ (id)listFromSerializedData:(id)arg1 replica:(id)arg2;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)_orderedSet;
- (void)addReminder:(id)arg1;
- (void)addUndoCommandsForObject:(id)arg1 block:(id /* block */)arg2;
- (id)copyForReplica:(id)arg1;
- (unsigned long long)countOfReminderIDs;
- (id)delegate;
- (id)document;
- (unsigned long long)indexInReminderIDsOfObject:(id)arg1;
- (id)init;
- (id)initWithDocument:(id)arg1 objectID:(id)arg2;
- (void)insertObject:(id)arg1 inReminderIDsAtIndex:(unsigned long long)arg2;
- (void)mergeWith:(id)arg1;
- (id)objectInReminderIDsAtIndex:(unsigned long long)arg1;
- (id)remObjectID;
- (id)reminderIDsProxy;
- (void)removeObjectFromReminderIDsAtIndex:(unsigned long long)arg1;
- (id)replica;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setRemObjectID:(id)arg1;
- (bool)wantsUndoCommands;

@end
