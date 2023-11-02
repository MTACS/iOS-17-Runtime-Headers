
@interface CKDRecordResponse : NSObject {
    NSString * _etag;
    CKRecord * _record;
    CKRecordID * _recordID;
}

@property (nonatomic, readonly, copy) NSString *etag;
@property (nonatomic, readonly) CKRecord *record;
@property (nonatomic, readonly, copy) CKRecordID *recordID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (id)etag;
- (id)initWithRecordID:(id)arg1 record:(id)arg2 etag:(id)arg3;
- (id)record;
- (id)recordID;

@end
