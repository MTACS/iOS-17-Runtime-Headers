
@interface HMDBackingStoreCacheUpdateRecordOperation : HMDBackingStoreOperation {
    NSData * _data;
    unsigned long long  _encoding;
    HMDBackingStoreCacheGroup * _group;
    HMDBackingStoreModelObject * _model;
    CKRecord * _record;
    NSString * _recordName;
}

@property (readonly) NSData *data;
@property (readonly) unsigned long long encoding;
@property (readonly) HMDBackingStoreCacheGroup *group;
@property (readonly) HMDBackingStoreModelObject *model;
@property (readonly) CKRecord *record;
@property (readonly) NSString *recordName;

- (void).cxx_destruct;
- (id)data;
- (unsigned long long)encoding;
- (id)group;
- (id)initWithGroup:(id)arg1 name:(id)arg2 model:(id)arg3 resultBlock:(id /* block */)arg4;
- (id)initWithGroup:(id)arg1 name:(id)arg2 record:(id)arg3 data:(id)arg4 encoding:(unsigned long long)arg5 model:(id)arg6 resultBlock:(id /* block */)arg7;
- (id)initWithGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 resultBlock:(id /* block */)arg5;
- (id)initWithGroup:(id)arg1 record:(id)arg2 resultBlock:(id /* block */)arg3;
- (id)mainReturningError;
- (id)model;
- (id)record;
- (id)recordName;

@end
