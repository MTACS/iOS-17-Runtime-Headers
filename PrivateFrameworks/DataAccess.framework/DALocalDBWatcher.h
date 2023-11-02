
@interface DALocalDBWatcher : NSObject {
    DACalDBHelper * _calDBHelper;
    NSMutableDictionary * _calDBInfosByPath;
    NSMapTable * _concernedNotePartyToBlockMap;
    NoteContext * _noteWatcher;
}

+ (id)_canonicalizePath:(id)arg1;
+ (id)sharedDBWatcher;

- (void).cxx_destruct;
- (id)_dbInfoForAccountID:(id)arg1 create:(bool)arg2;
- (void)_handleCalChangeNotification;
- (void)_notesChangedExternally;
- (void)didReceiveDarwinNotification:(id)arg1;
- (id)init;
- (int)lastSavedCalSequenceNumberForDatabaseInContainer:(id)arg1;
- (void)noteCalDBDirChanged;
- (void)registerConcernedCalParty:(id)arg1 forAccountID:(id)arg2 withChangedBlock:(id /* block */)arg3;
- (void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(id /* block */)arg2;
- (void)removeConcernedCalParty:(id)arg1 forAccountID:(id)arg2;
- (void)removeConcernedNoteParty:(id)arg1;
- (void)setLastSavedCalSequenceNumber:(int)arg1 forDatabaseInContainer:(id)arg2;

@end
