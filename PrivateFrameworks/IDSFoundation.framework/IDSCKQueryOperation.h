
@interface IDSCKQueryOperation : IDSCKDatabaseOperation {
    id /* block */  _completionBlock;
    id /* block */  _recordFetchedBlock;
}

@property (copy) id /* block */ completionBlock;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id /* block */)recordFetchedBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;

@end
