
@interface HDJournalChapterItem : NSObject <HDJournalChapterEntry> {
    NSString * _entryClassName;
    NSData * _serializedEntryData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *entryClassName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *serializedEntryData;
@property (nonatomic, readonly) long long size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)deserializedEntryWithError:(id*)arg1;
- (id)entryClassName;
- (id)init;
- (id)initWithEntryClassName:(id)arg1 serializedEntryData:(id)arg2;
- (id)serializedEntryData;
- (long long)size;

@end
