
@interface WebAVPlayerControllerForwarder : NSObject {
    struct RetainPtr<WebAVPlayerController> { 
        void *m_ptr; 
    }  _playerController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_forwardingTargetForKeyPath:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (bool)respondsToSelector:(SEL)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
