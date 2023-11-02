
@interface OSLogSystemEnumerator : OSLogEnumerator {
    bool  _done;
    NSObject<OS_dispatch_semaphore> * _handlerDone;
    OSLogEntry * _next;
    NSObject<OS_dispatch_semaphore> * _pushDone;
    OSLogEventStream * _stream;
}

- (void).cxx_destruct;
- (void)_handleEventProxy:(id)arg1;
- (void)_handleInvalidation;
- (void)dealloc;
- (id)initWithEventStream:(id)arg1 options:(unsigned long long)arg2 position:(id)arg3;
- (id)nextObject;

@end
