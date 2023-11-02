
@interface BRCShareDeleteInfo : NSObject {
    CKRecord * _emptyRecord;
    CKRecordID * _shareID;
}

@property (nonatomic, readonly) CKRecord *emptyRecord;
@property (nonatomic, readonly) CKRecordID *shareID;

- (void).cxx_destruct;
- (id)emptyRecord;
- (unsigned long long)hash;
- (id)initWithShareID:(id)arg1 emptyRecord:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)shareID;

@end
