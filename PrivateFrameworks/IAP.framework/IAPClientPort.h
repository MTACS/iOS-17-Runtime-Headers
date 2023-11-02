
@interface IAPClientPort : NSObject {
    NSObject<OS_dispatch_queue> * _clientPortEventQueue;
    id /* block */  _sendDataHandler;
    NSObject<OS_dispatch_queue> * _sendDataHandlerQueue;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientPortEventQueue;
@property (nonatomic) id /* block */ sendDataHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sendDataHandlerQueue;
@property (nonatomic, readonly) NSString *uuid;

- (id)clientPortEventQueue;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 queue:(id)arg2 sendHandler:(id /* block */)arg3;
- (id /* block */)sendDataHandler;
- (id)sendDataHandlerQueue;
- (void)setSendDataHandler:(id /* block */)arg1;
- (id)uuid;

@end
