
@interface IDSCapsuleParser : NSObject {
    NSObject<OS_nw_connection> * _connection;
    unsigned long long  _currentCapsuleHeaderLength;
    unsigned long long  _currentCapsuleLength;
    unsigned long long  _currentCapsuleType;
    unsigned char  _headerBuffer;
    unsigned char  _headerBufferSize;
    NSObject<OS_dispatch_data> * _pendingData;
    NSObject<OS_nw_error> * _pendingError;
    bool  _processingReadCall;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _state;
    unsigned long long  _waitingBodySize;
}

@property (nonatomic) NSObject<OS_nw_connection> *connection;

- (void).cxx_destruct;
- (bool)_parseHeader;
- (void)_readCapsuleWithExistingData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_readHeader:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_readWithCompletionHandler:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)readCapsuleWithCompletionHandler:(id /* block */)arg1;
- (void)setConnection:(id)arg1;

@end
