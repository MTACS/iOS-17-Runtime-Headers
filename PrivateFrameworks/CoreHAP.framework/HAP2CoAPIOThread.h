
@interface HAP2CoAPIOThread : NSThread {
    NSMutableArray * _completedQueue;
    NSMutableArray * _consumerInfo;
    <HAP2CoAPIOThreadDelegate> * _delegate;
    HAP2Lock * _lock;
    NSMutableArray * _messageQueue;
    NSMutableSet * _pendingMessages;
    unsigned long long  _pendingMessagesThreshold;
    NSMutableArray * _queue;
    int  _wakeupPipeRead;
    int  _wakeupPipeWrite;
    NSMutableArray * _zombieSessions;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_assertIsCurrentThread;
- (void)_cleanupWithContext:(struct coap_context_t { unsigned short x1[6]; struct coap_resource_t {} *x2; struct coap_resource_t {} *x3; struct coap_async_state_t {} *x4; unsigned long long x5; struct coap_queue_t {} *x6; struct coap_endpoint_t {} *x7; struct coap_session_t {} *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); void *x19; char *x20; unsigned long long x21; char *x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; void *x29; }*)arg1;
- (struct coap_context_t { unsigned short x1[6]; struct coap_resource_t {} *x2; struct coap_resource_t {} *x3; struct coap_async_state_t {} *x4; unsigned long long x5; struct coap_queue_t {} *x6; struct coap_endpoint_t {} *x7; struct coap_session_t {} *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); void *x19; char *x20; unsigned long long x21; char *x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; void *x29; }*)_createContext;
- (void)_enqueue:(id)arg1;
- (bool)_processQueueEntry:(id)arg1 context:(struct coap_context_t { unsigned short x1[6]; struct coap_resource_t {} *x2; struct coap_resource_t {} *x3; struct coap_async_state_t {} *x4; unsigned long long x5; struct coap_queue_t {} *x6; struct coap_endpoint_t {} *x7; struct coap_session_t {} *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); void *x19; char *x20; unsigned long long x21; char *x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; void *x29; }*)arg2;
- (bool)_processQueueWithContext:(struct coap_context_t { unsigned short x1[6]; struct coap_resource_t {} *x2; struct coap_resource_t {} *x3; struct coap_async_state_t {} *x4; unsigned long long x5; struct coap_queue_t {} *x6; struct coap_endpoint_t {} *x7; struct coap_session_t {} *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); void *x19; char *x20; unsigned long long x21; char *x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; void *x29; }*)arg1;
- (bool)_processSessionBlock:(id /* block */)arg1 consumer:(id)arg2 context:(struct coap_context_t { unsigned short x1[6]; struct coap_resource_t {} *x2; struct coap_resource_t {} *x3; struct coap_async_state_t {} *x4; unsigned long long x5; struct coap_queue_t {} *x6; struct coap_endpoint_t {} *x7; struct coap_session_t {} *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); void *x19; char *x20; unsigned long long x21; char *x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; void *x29; }*)arg3;
- (void)_registerConsumer:(id)arg1 context:(struct coap_context_t { unsigned short x1[6]; struct coap_resource_t {} *x2; struct coap_resource_t {} *x3; struct coap_async_state_t {} *x4; unsigned long long x5; struct coap_queue_t {} *x6; struct coap_endpoint_t {} *x7; struct coap_session_t {} *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); void *x19; char *x20; unsigned long long x21; char *x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; void *x29; }*)arg2;
- (void)_unregisterConsumer:(id)arg1;
- (void)_wakeUpThread;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithQualityOfService:(long long)arg1 delegate:(id)arg2;
- (void)main;
- (void)queueSessionBlockForConsumer:(id)arg1 sessionBlock:(id /* block */)arg2 withTimeout:(double)arg3 requiresCompletion:(bool)arg4;
- (void)queueSessionCompletionForConsumer:(id)arg1;
- (void)registerConsumer:(id)arg1;
- (void)unregisterConsumer:(id)arg1;

@end
