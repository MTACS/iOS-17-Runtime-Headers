
@interface HMDBackingStoreCacheDeleteRecordOperation : HMDBackingStoreOperation {
    HMDBackingStoreCacheGroup * _group;
    NSArray * _recordNames;
}

@property (nonatomic, retain) HMDBackingStoreCacheGroup *group;
@property (nonatomic, retain) NSArray *recordNames;

- (void).cxx_destruct;
- (id)group;
- (id)initWithGroup:(id)arg1 recordNames:(id)arg2 resultBlock:(id /* block */)arg3;
- (id)mainReturningError;
- (id)recordNames;
- (void)setGroup:(id)arg1;
- (void)setRecordNames:(id)arg1;

@end
