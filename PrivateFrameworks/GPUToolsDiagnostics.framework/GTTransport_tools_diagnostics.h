
@interface GTTransport_tools_diagnostics : NSObject {
    int (* _dispatch_send;
    NSError * _error;
    NSString * _identifier;
    unsigned int  _interposerVersion;
    bool  _invalid;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _messageCounter;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _messageSendQueueDepth;
    bool  _prioritizeOutgoingMessages;
    NSObject<OS_dispatch_queue> * _queue;
    GTIntKeyedDictionary_tools_diagnostics * _replyHandlersMap;
    NSObject<OS_dispatch_queue> * _rootQueue;
    NSObject<OS_dispatch_queue> * _sendQueue;
    NSMutableSet * _sources;
    NSURL * _url;
}

@property (nonatomic, readonly) bool connected;
@property (nonatomic, readonly, retain) NSError *error;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned int interposerVersion;
@property (nonatomic, readonly) bool invalid;
@property (nonatomic) bool prioritizeOutgoingMessages;
@property (nonatomic) bool synchronous;
@property (nonatomic, readonly, retain) NSURL *url;

- (bool)_activateSource:(id)arg1;
- (void)_cancelSource:(id)arg1;
- (void)_dispatchMessage:(id)arg1;
- (void)_handleReplyTimeout:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_invalidate;
- (unsigned int)_nextMessageSerial;
- (bool)_packMessage:(id)arg1 error:(id*)arg2;
- (void)_scheduleInvalidation:(id)arg1;
- (long long)_sendMessage:(id)arg1 error:(id*)arg2;
- (id)connect;
- (bool)connected;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)drainQueue;
- (id)error;
- (id)identifier;
- (id)init;
- (unsigned int)interposerVersion;
- (bool)invalid;
- (void)invalidate;
- (id)newSourceWithQueue:(id)arg1;
- (bool)prioritizeOutgoingMessages;
- (bool)relayMessage:(id)arg1 error:(id*)arg2;
- (bool)send:(id)arg1 error:(id*)arg2;
- (bool)send:(id)arg1 error:(id*)arg2 replyQueue:(id)arg3 timeout:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (bool)send:(id)arg1 inReplyTo:(id)arg2 error:(id*)arg3;
- (bool)send:(id)arg1 inReplyTo:(id)arg2 error:(id*)arg3 replyQueue:(id)arg4 timeout:(unsigned long long)arg5 handler:(id /* block */)arg6;
- (bool)sendNewMessage:(int)arg1 error:(id*)arg2;
- (bool)sendNewMessage:(int)arg1 error:(id*)arg2 replyQueue:(id)arg3 timeout:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)setIdentifier:(id)arg1;
- (void)setInterposerVersion:(unsigned int)arg1;
- (void)setPrioritizeOutgoingMessages:(bool)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setTargetQueue:(id)arg1;
- (bool)synchronous;
- (id)url;

@end
