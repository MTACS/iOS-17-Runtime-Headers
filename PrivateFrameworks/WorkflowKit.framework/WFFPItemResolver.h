
@interface WFFPItemResolver : NSObject <FPItemCollectionMinimalDelegate> {
    FPItemCollection * _collection;
    id /* block */  _completionHandler;
    NSMutableArray * _mutableComponents;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) FPItemCollection *collection;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *mutableComponents;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collection;
- (void)collectionDidFinishGathering:(id)arg1;
- (id /* block */)completionHandler;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)determineNextItemIfPossible;
- (id)initWithDomainID:(id)arg1 relativeSubpath:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)mutableComponents;
- (id)queue;
- (void)setCollection:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setMutableComponents:(id)arg1;
- (void)startObservingFolderItemCollection:(id)arg1;

@end
