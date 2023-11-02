
@interface CKMergeableValueDownloadTask : NSObject {
    id /* block */  _completionBlock;
    NSString * _key;
    CKMergeableValueID * _mergeableValueID;
    CKRecord * _record;
    CKMergeableRecordValue * _recordValue;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) CKMergeableValueID *mergeableValueID;
@property (nonatomic, retain) CKRecord *record;
@property (nonatomic, retain) CKMergeableRecordValue *recordValue;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)key;
- (id)mergeableValueID;
- (id)record;
- (id)recordValue;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setKey:(id)arg1;
- (void)setMergeableValueID:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordValue:(id)arg1;

@end
