
@interface BRCFetchSubResourceRecord : NSObject {
    CKRecord * _record;
    CKRecordID * _recordID;
    CKRecordID * _recordIDBlockingSave;
    CKRecordID * _recordIDNeedingFetch;
    long long  _recordType;
    NSData * _xattrSignature;
}

@property (nonatomic, readonly) CKRecord *record;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, retain) CKRecordID *recordIDBlockingSave;
@property (nonatomic, retain) CKRecordID *recordIDNeedingFetch;
@property (nonatomic, readonly) long long recordType;
@property (nonatomic, retain) NSData *xattrSignature;

- (void).cxx_destruct;
- (id)description;
- (id)initWithChangedRecord:(id)arg1 shareID:(id)arg2 xattrSignatureNeedingFetch:(id)arg3 structureRecordBlockingSave:(id)arg4;
- (id)initWithRecordIDNeedingFetch:(id)arg1 recordType:(long long)arg2;
- (bool)isWaitingOnShareIDFetch;
- (id)record;
- (id)recordID;
- (id)recordIDBlockingSave;
- (id)recordIDNeedingFetch;
- (long long)recordType;
- (long long)resolveRecordType;
- (void)setRecordIDBlockingSave:(id)arg1;
- (void)setRecordIDNeedingFetch:(id)arg1;
- (void)setXattrSignature:(id)arg1;
- (id)xattrSignature;

@end
