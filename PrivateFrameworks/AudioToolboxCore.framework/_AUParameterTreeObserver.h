
@interface _AUParameterTreeObserver : NSObject {
    id /* block */  _callback;
}

@property (nonatomic, copy) id /* block */ callback;

- (void).cxx_destruct;
- (id /* block */)callback;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCallback:(id /* block */)arg1;

@end
