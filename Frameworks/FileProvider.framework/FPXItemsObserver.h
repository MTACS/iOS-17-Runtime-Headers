
@interface FPXItemsObserver : FPXObserver <NSFileProviderEnumerationObserver> {
    id /* block */  _finishedBlock;
    NSMutableArray * _items;
    long long  _suggestedPageSize;
    NSData * _syncAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ finishedBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long suggestedPageSize;
@property (readonly) Class superclass;
@property (copy) NSData *syncAnchor;

- (void).cxx_destruct;
- (void)didEnumerateItems:(id)arg1;
- (void)finishEnumeratingUpToPage:(id)arg1;
- (void)finishEnumeratingWithError:(id)arg1;
- (id /* block */)finishedBlock;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 nsFileProviderRequest:(id)arg3;
- (void)setFinishedBlock:(id /* block */)arg1;
- (void)setSuggestedPageSize:(long long)arg1;
- (void)setSyncAnchor:(id)arg1;
- (long long)suggestedPageSize;
- (id)syncAnchor;

@end
