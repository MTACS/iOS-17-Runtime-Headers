
@interface PBCallbackSerialization : NSObject {
    id /* block */  _endBlock;
    bool  _hasBegun;
    bool  _hasEnded;
}

- (void).cxx_destruct;
- (void)sendBeginBlock:(id /* block */)arg1;
- (void)sendEndBlock:(id /* block */)arg1;

@end
