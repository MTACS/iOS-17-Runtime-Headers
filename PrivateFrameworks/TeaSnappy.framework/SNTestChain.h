
@interface SNTestChain : NSObject {
    NSMutableArray * _linkBlocks;
}

@property (nonatomic, readonly) NSMutableArray *linkBlocks;

- (void).cxx_destruct;
- (void)addLink:(id /* block */)arg1;
- (id)init;
- (id)linkBlocks;
- (void)popAndRunWithCompletion:(id /* block */)arg1 testFailure:(id)arg2;
- (void)runWithCompletion:(id /* block */)arg1;

@end
