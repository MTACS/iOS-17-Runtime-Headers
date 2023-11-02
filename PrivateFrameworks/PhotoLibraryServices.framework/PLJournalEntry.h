
@interface PLJournalEntry : NSObject {
    PLJournalEntryHeader * _header;
    NSPersistentHistoryToken * _historyToken;
    <PLJournalEntryPayload> * _payload;
    Class  _payloadClass;
    <PLJournalEntryPayloadID> * _payloadID;
}

@property (nonatomic, retain) PLJournalEntryHeader *header;
@property (nonatomic, retain) NSPersistentHistoryToken *historyToken;
@property (nonatomic, retain) <PLJournalEntryPayload> *payload;
@property (nonatomic, readonly) Class payloadClass;
@property (nonatomic, retain) <PLJournalEntryPayloadID> *payloadID;
@property (nonatomic) unsigned int payloadVersion;

- (void).cxx_destruct;
- (void)_appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4 checksumContext:(id)arg5;
- (bool)_readFromFileHandle:(id)arg1 decodePayload:(bool)arg2 payloadClass:(Class)arg3 error:(id*)arg4;
- (void)appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4 checksumContext:(id)arg5;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithBuilder:(id)arg1;
- (unsigned long long)entryType;
- (id)entryTypeDescription;
- (id)header;
- (id)historyToken;
- (id)init;
- (id)initForDeleteWithPayloadID:(id)arg1 payloadClass:(Class)arg2;
- (id)initForInsertWithPayload:(id)arg1;
- (id)initForUpdateWithPayload:(id)arg1;
- (id)initWithPayloadID:(id)arg1 payload:(id)arg2 payloadClass:(Class)arg3 entryType:(int)arg4;
- (id)payload;
- (Class)payloadClass;
- (id)payloadID;
- (unsigned int)payloadVersion;
- (bool)readFromFileHandle:(id)arg1 decodePayload:(bool)arg2 payloadClass:(Class)arg3 entryOffset:(unsigned long long*)arg4 error:(id*)arg5;
- (void)setHeader:(id)arg1;
- (void)setHistoryToken:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadID:(id)arg1;
- (void)setPayloadVersion:(unsigned int)arg1;
- (void)writeBytes:(const void*)arg1 length:(unsigned long long)arg2 toFileHandle:(id)arg3 checksumContext:(id)arg4;
- (bool)writeToFileHandle:(id)arg1 checksumContext:(id)arg2 error:(id*)arg3;

@end
