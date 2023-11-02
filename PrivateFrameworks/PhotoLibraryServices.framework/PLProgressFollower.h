
@interface PLProgressFollower : NSObject {
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSProgress * _outputProgress;
    id /* block */  _progressHandler;
    NSProgress * _sourceProgress;
}

@property (retain) NSProgress *outputProgress;
@property (readonly) NSProgress *sourceProgress;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSourceProgress:(id)arg1 progressHandler:(id /* block */)arg2;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputProgress;
- (void)setOutputProgress:(id)arg1;
- (id)sourceProgress;

@end
