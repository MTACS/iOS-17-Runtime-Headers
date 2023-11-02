
@interface CRKOperationBackedIDSMessageSubscription : NSObject <CATTaskOperationNotificationDelegate, CRKCancelable> {
    id /* block */  _handler;
    CATRemoteTaskOperation * _listenOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CATRemoteTaskOperation *listenOperation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithListenOperation:(id)arg1 handler:(id /* block */)arg2;
- (id)listenOperation;
- (void)setHandler:(id /* block */)arg1;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;

@end
