
@interface DAUserNotificationInfo : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSString * _groupIdentifier;
    id /* block */  _handler;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)groupIdentifier;
- (id /* block */)handler;
- (void)setCallbackQueue:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
