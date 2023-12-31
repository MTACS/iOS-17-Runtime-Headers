
@interface VUIAcquisitionRequest : NSObject {
    bool  _cancelled;
    id /* block */  _completionBlock;
    VUIStoreAcquisitionProperties * _properties;
}

@property (getter=isCancelled) bool cancelled;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, copy) VUIStoreAcquisitionProperties *properties;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (bool)isCancelled;
- (id)properties;
- (void)setCancelled:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setProperties:(id)arg1;

@end
