
@interface IDSCKFetchRecordZonesOperation : IDSCKDatabaseOperation {
    id /* block */  _fetchRecordZonesCompletionBlock;
}

@property (nonatomic, copy) id /* block */ fetchRecordZonesCompletionBlock;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id /* block */)fetchRecordZonesCompletionBlock;
- (void)setFetchRecordZonesCompletionBlock:(id /* block */)arg1;

@end
