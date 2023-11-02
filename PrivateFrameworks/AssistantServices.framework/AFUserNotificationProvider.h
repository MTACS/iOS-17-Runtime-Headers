
@interface AFUserNotificationProvider : NSObject <AFUserNotificationServiceDelegate> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _responseHandlersByNotificationID;
}

- (void).cxx_destruct;
- (id)_connection;
- (id)init;
- (void)postNotificationRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)receivedNotificationResponse:(id)arg1;
- (void)withdrawNotificationRequestWithIdentifier:(id)arg1;

@end
