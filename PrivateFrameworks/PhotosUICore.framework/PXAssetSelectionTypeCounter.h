
@interface PXAssetSelectionTypeCounter : PXObservable <PXChangeObserver, PXInfoProvider, PXInfoUpdaterObserver> {
    NSObject<OS_dispatch_queue> * _countUpdateQueue;
    PXInfoUpdater * _infoUpdater;
    PXSectionedSelectionManager * _selectionManager;
    struct { 
        unsigned long long count; 
        long long type; 
    }  _typedCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXInfoUpdater *infoUpdater;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (readonly) Class superclass;
@property (nonatomic) struct { unsigned long long x1; long long x2; } typedCount;

- (void).cxx_destruct;
- (id)infoUpdater;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (id)init;
- (id)initWithSelectionManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)priorityForInfoRequestOfKind:(id)arg1;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)selectionManager;
- (id)selectionSnapshot;
- (void)setTypedCount:(struct { unsigned long long x1; long long x2; })arg1;
- (struct { unsigned long long x1; long long x2; })typedCount;

@end
