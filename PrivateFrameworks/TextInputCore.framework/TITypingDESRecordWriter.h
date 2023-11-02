
@interface TITypingDESRecordWriter : NSObject {
    DESRecordStore * _typingDataStore;
}

@property (nonatomic, retain) DESRecordStore *typingDataStore;

- (void).cxx_destruct;
- (void)clearStoredRecordsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchRecords:(id /* block */)arg1;
- (id)init;
- (void)setTypingDataStore:(id)arg1;
- (bool)shouldRecordToDES;
- (void)storeAlignedSession:(id)arg1 completion:(id /* block */)arg2;
- (void)storeTypingSession:(id)arg1 containsCP:(bool)arg2 completion:(id /* block */)arg3;
- (id)typingDataStore;

@end
