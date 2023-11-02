
@interface WFCloudKitTask : NSObject {
    id /* block */  _cancellationHandler;
    bool  _cancelled;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (getter=isCancelled) bool cancelled;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)cancellationHandler;
- (bool)isCancelled;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCancelled:(bool)arg1;

@end
