
@interface _GCHIDEventSubject : NSObject <_GCHIDEventSource> {
    NSDictionary * _handlersByService;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _Atomic bool  _stopped;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStopped) bool stopped;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (bool)isStopped;
- (id)observeHIDEvents:(id /* block */)arg1;
- (id)observeHIDEvents:(id /* block */)arg1 forService:(id)arg2;
- (void)publishHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)setStopped:(bool)arg1;

@end
