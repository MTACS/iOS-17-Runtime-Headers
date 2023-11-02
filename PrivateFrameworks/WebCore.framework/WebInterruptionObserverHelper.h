
@interface WebInterruptionObserverHelper : NSObject {
    void * _callback;
}

- (void)clearCallback;
- (void)dealloc;
- (id)initWithCallback:(void*)arg1;
- (void)interruption:(id)arg1;

@end
