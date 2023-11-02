
@interface ISAVPlayerLayer : AVPlayerLayer {
    NSObject<OS_dispatch_queue> * _isolationQueue;
    id /* block */  _readyForDisplayChangeHandler;
}

@property (nonatomic, copy) id /* block */ readyForDisplayChangeHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (void)deferredDealloc;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;
- (id /* block */)readyForDisplayChangeHandler;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlayer:(id)arg1;
- (void)setReadyForDisplayChangeHandler:(id /* block */)arg1;
- (void)setWrappedPlayer:(id)arg1;

@end
