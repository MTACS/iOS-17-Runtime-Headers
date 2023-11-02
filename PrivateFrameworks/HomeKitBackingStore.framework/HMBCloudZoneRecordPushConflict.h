
@interface HMBCloudZoneRecordPushConflict : HMFObject {
    CKRecord * _ancestorRecord;
    CKRecord * _clientRecord;
    CKRecordID * _recordID;
    CKRecord * _serverRecord;
}

@property (readonly) CKRecord *ancestorRecord;
@property (readonly) CKRecord *clientRecord;
@property (readonly) CKRecordID *recordID;
@property (readonly) CKRecord *serverRecord;

- (void).cxx_destruct;
- (id)ancestorRecord;
- (id)attributeDescriptions;
- (id)clientRecord;
- (unsigned long long)hash;
- (id)initWithRecordID:(id)arg1 clientRecord:(id)arg2 serverRecord:(id)arg3 ancestorRecord:(id)arg4;
- (id)initWithRecordID:(id)arg1 error:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)recordID;
- (id)serverRecord;

@end
