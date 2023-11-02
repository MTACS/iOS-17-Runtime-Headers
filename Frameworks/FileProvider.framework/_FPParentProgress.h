
@interface _FPParentProgress : NSProgress {
    FPProgressProxy * _progressProxy;
}

@property (readonly) FPProgressProxy *progressProxy;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)isCancellable;
- (bool)isPausable;
- (id)progressProxy;
- (void)setProgressProxy:(id)arg1;

@end
