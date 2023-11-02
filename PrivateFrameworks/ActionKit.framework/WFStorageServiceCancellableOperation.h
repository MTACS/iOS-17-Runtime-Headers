
@interface WFStorageServiceCancellableOperation : NSObject <WFFileStorageServiceOperation> {
    id /* block */  _cancelBlock;
}

@property (nonatomic, copy) id /* block */ cancelBlock;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)cancelBlock;
- (id)initWithCancelBlock:(id /* block */)arg1;
- (bool)isCancelled;
- (void)setCancelBlock:(id /* block */)arg1;

@end
