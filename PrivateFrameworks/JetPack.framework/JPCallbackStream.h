
@interface JPCallbackStream : JPStream {
    id /* block */  _readCallback;
    id /* block */  _seekForwardCallback;
    id /* block */  _seekToEndCallback;
}

@property (nonatomic, copy) id /* block */ readCallback;
@property (nonatomic, copy) id /* block */ seekForwardCallback;
@property (nonatomic, copy) id /* block */ seekToEndCallback;

- (void).cxx_destruct;
- (id)initWithReadCallback:(id /* block */)arg1 seekForwardCallback:(id /* block */)arg2 seekToEndCallback:(id /* block */)arg3;
- (id /* block */)readCallback;
- (id /* block */)seekForwardCallback;
- (id /* block */)seekToEndCallback;
- (void)setReadCallback:(id /* block */)arg1;
- (void)setSeekForwardCallback:(id /* block */)arg1;
- (void)setSeekToEndCallback:(id /* block */)arg1;

@end
