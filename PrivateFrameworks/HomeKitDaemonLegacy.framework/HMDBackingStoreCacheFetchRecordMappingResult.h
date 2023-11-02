
@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject <HMDBackingStoreRecordMapping> {
    HMDBackingStoreCacheGroup * _group;
    NSUUID * _parentUuid;
    NSString * _recordName;
    NSString * _type;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDBackingStoreCacheGroup *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *parentUuid;
@property (nonatomic, readonly) NSString *recordName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)description;
- (id)group;
- (id)initWithGroup:(id)arg1 recordName:(id)arg2 uuid:(id)arg3 parentUuid:(id)arg4 type:(id)arg5;
- (id)parentUuid;
- (id)recordName;
- (id)type;
- (id)uuid;

@end
