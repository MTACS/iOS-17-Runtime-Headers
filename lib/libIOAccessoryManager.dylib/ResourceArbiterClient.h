
@interface ResourceArbiterClient : BaseResourceArbiterClient {
    int  _clientPriority;
    unsigned int  _ioConnect;
    unsigned int  _ioNotificationObject;
    struct IONotificationPort { } * _ioNotificationPort;
    unsigned int  _ioService;
    NSObject<OS_dispatch_queue> * _notificationPortQueue;
    int  _pendingResourceRequest;
    bool  _resourceAccessStatus;
    NSObject<OS_dispatch_semaphore> * _sema;
}

@property (nonatomic, readonly) int clientPriority;
@property (nonatomic, readonly) unsigned int ioService;
@property (nonatomic, readonly) int pendingResourceRequest;
@property (nonatomic, readonly) bool resourceAccessStatus;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *sema;

- (void)_processResourceAccessStatus:(bool)arg1;
- (bool)asynchRequestResourceAccess:(bool)arg1;
- (int)clientPriority;
- (void)dealloc;
- (id)initWithID:(int)arg1;
- (unsigned int)ioService;
- (int)pendingResourceRequest;
- (void)releaseResourceAccess;
- (void)resourceAccessGranted;
- (void)resourceAccessRevoked;
- (bool)resourceAccessStatus;
- (id)sema;
- (bool)synchRequestResourceAccess;

@end
