
@interface LPAVPlayerViewController : AVPlayerViewController {
    id /* block */  _readyForDisplayCallback;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;

@end
