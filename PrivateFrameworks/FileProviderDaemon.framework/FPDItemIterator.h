
@interface FPDItemIterator : FPDIterator <FPDLifetimeExtender, FPXEnumeratorObserver> {
    FPItem * _current;
    FPDDomain * _domain;
    bool  _done;
    NSMutableArray * _enumeratorByDepth;
    NSError * _error;
    unsigned long long  _numFoldersPoped;
    FPDExtension * _provider;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _remainingItemsByDepth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *prettyDescription;
@property (readonly) int requestEffectivePID;
@property (readonly) Class superclass;
@property (readonly) double timeout;
@property unsigned long long timeoutState;

- (void).cxx_destruct;
- (bool)_createEnumerator;
- (void)_decorateItem:(id)arg1;
- (bool)_enumerateMoreItems;
- (void)_invalidateWithError:(id)arg1;
- (void)_next;
- (void)_popFolder;
- (id)_popItem;
- (void)_pushFolder:(id)arg1;
- (bool)_shouldTraverseSubTree:(id)arg1;
- (void)dealloc;
- (void)didUpdateItem:(id)arg1;
- (bool)done;
- (void)enumerationResultsDidChange;
- (id)error;
- (id)initWithItem:(id)arg1 provider:(id)arg2;
- (id)nextWithError:(id*)arg1;
- (unsigned long long)numFoldersPopped;
- (id)prettyDescription;
- (int)requestEffectivePID;

@end
