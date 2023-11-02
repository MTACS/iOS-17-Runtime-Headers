
@interface WFIntentDynamicResolutionRequest : NSObject {
    bool  _cancelled;
    id /* block */  _resolutionBlock;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, copy) id /* block */ resolutionBlock;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (bool)isCancelled;
- (id /* block */)resolutionBlock;
- (void)setResolutionBlock:(id /* block */)arg1;

@end
