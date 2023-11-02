
@interface DVTStreamManager : NSObject {
    unsigned long long  _currentStreamSize;
    NSObject<OS_dispatch_queue> * _queue;
    <DVTInputStream><DVTOutputStream> * _stream;
}

@property (readonly) unsigned long long currentStreamSize;

- (void).cxx_destruct;
- (long long)commit:(const void*)arg1 bufferSize:(unsigned long long)arg2 error:(id*)arg3 destructor:(id /* block */)arg4;
- (long long)commit:(id)arg1 error:(id*)arg2;
- (unsigned long long)currentStreamSize;
- (id)export;
- (id)initWithStream:(id)arg1;

@end
