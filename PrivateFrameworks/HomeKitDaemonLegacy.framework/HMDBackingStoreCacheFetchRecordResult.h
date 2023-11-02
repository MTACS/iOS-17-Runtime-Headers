
@interface HMDBackingStoreCacheFetchRecordResult : HMFObject {
    NSData * _data;
    unsigned long long  _encoding;
    HMDBackingStoreCacheGroup * _group;
    CKRecord * _record;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long encoding;
@property (nonatomic, readonly) HMDBackingStoreCacheGroup *group;
@property (nonatomic, readonly) CKRecord *record;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (unsigned long long)encoding;
- (id)group;
- (id)initWithGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 uuid:(id)arg5;
- (id)record;
- (id)uuid;

@end
