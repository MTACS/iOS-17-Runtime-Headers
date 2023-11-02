
@interface HMDBackingStoreCacheFetchRecords : HMDBackingStoreOperation {
    id /* block */  _fetchResult;
    HMDBackingStoreCacheGroup * _group;
    NSArray * _parentUuids;
    NSArray * _recordNames;
    bool  _recursive;
    NSArray * _uuids;
}

@property (nonatomic, copy) id /* block */ fetchResult;
@property (nonatomic, retain) HMDBackingStoreCacheGroup *group;
@property (nonatomic, retain) NSArray *parentUuids;
@property (nonatomic, retain) NSArray *recordNames;
@property bool recursive;
@property (nonatomic, retain) NSArray *uuids;

- (void).cxx_destruct;
- (id /* block */)fetchResult;
- (id)group;
- (id)initWithGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithGroup:(id)arg1 records:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)mainReturningError;
- (id)parentUuids;
- (id)recordNames;
- (bool)recursive;
- (void)setFetchResult:(id /* block */)arg1;
- (void)setGroup:(id)arg1;
- (void)setParentUuids:(id)arg1;
- (void)setRecordNames:(id)arg1;
- (void)setRecursive:(bool)arg1;
- (void)setUuids:(id)arg1;
- (id)uuids;

@end
