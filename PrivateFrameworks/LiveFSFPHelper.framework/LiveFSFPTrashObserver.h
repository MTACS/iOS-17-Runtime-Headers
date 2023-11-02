
@interface LiveFSFPTrashObserver : NSObject <NSFileProviderEnumerationObserver> {
    id /* block */  _completionHandler;
    NSMutableArray * _items;
    NSData * _lastPage;
}

@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableArray *items;
@property (readonly, retain) NSData *lastPage;
@property (nonatomic, readonly) long long suggestedPageSize;
@property (readonly) Class superclass;

+ (id)newWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)didEnumerateItems:(id)arg1;
- (void)finishEnumeratingUpToPage:(id)arg1;
- (void)finishEnumeratingWithError:(id)arg1;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)items;
- (id)lastPage;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setItems:(id)arg1;

@end
