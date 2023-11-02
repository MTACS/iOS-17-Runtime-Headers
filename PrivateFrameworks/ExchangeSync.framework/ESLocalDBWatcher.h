
@interface ESLocalDBWatcher : NSObject {
    void * _abWatcher;
    ESCalDBHelper * _calDBHelper;
    NSMutableDictionary * _calDBInfosByPath;
    NSMapTable * _concernedABPartyToBlockMap;
    NSMapTable * _concernedNotePartyToBlockMap;
    int  _lastSavedABSequenceNumber;
    NoteContext * _noteWatcher;
}

@property (nonatomic) int lastSavedABSequenceNumber;

+ (id)_canonicalizePath:(id)arg1;
+ (id)sharedDBWatcher;

- (void).cxx_destruct;
- (id)_dbInfoForAccountID:(id)arg1 create:(bool)arg2;
- (void)_handleABChangeNotificationWithInfo:(id)arg1;
- (void)_handleCalChangeNotification;
- (void)_notesChangedExternally;
- (void)dealloc;
- (void)didReceiveDarwinNotification:(id)arg1;
- (id)init;
- (int)lastSavedABSequenceNumber;
- (int)lastSavedCalSequenceNumberForDatabaseInContainer:(id)arg1;
- (void)noteABDBDirChanged;
- (void)noteCalDBDirChanged;
- (void)registerConcernedABParty:(id)arg1 withChangedBlock:(id /* block */)arg2;
- (void)registerConcernedCalParty:(id)arg1 forAccountID:(id)arg2 withChangedBlock:(id /* block */)arg3;
- (void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(id /* block */)arg2;
- (void)removeConcernedABParty:(id)arg1;
- (void)removeConcernedCalParty:(id)arg1 forAccountID:(id)arg2;
- (void)removeConcernedNoteParty:(id)arg1;
- (void)setLastSavedABSequenceNumber:(int)arg1;
- (void)setLastSavedCalSequenceNumber:(int)arg1 forDatabaseInContainer:(id)arg2;

@end
