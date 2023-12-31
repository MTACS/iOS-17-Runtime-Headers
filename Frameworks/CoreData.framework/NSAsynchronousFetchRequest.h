
@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest {
    long long  _estimatedResultCount;
    NSFetchRequest * _fetchRequest;
    id  _requestCompletionBlock;
}

@property (readonly) id /* block */ completionBlock;
@property (nonatomic) long long estimatedResultCount;
@property (readonly) NSFetchRequest *fetchRequest;

- (id /* block */)completionBlock;
- (void)dealloc;
- (id)description;
- (long long)estimatedResultCount;
- (id)fetchRequest;
- (id)initWithFetchRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (unsigned long long)requestType;
- (void)setEstimatedResultCount:(long long)arg1;

@end
