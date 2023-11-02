
@interface CARSetupProgressView : UIProgressView {
    NSProgress * _animatedObservedProgress;
}

@property (nonatomic, retain) NSProgress *animatedObservedProgress;

- (void).cxx_destruct;
- (id)animatedObservedProgress;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAnimatedObservedProgress:(id)arg1;
- (void)setObservedProgress:(id)arg1 animated:(bool)arg2;

@end
