
@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult {
    NSAsynchronousFetchRequest * _fetchRequest;
    NSArray * _finalResult;
    id  _intermediateResultCallback;
}

@property (readonly) NSAsynchronousFetchRequest *fetchRequest;
@property (readonly) NSArray *finalResult;

- (void)dealloc;
- (id)fetchRequest;
- (id)finalResult;
- (id)initForFetchRequest:(id)arg1 withContext:(id)arg2 andProgress:(id)arg3 completetionBlock:(id /* block */)arg4;
- (void)setOperationError:(id)arg1;

@end
