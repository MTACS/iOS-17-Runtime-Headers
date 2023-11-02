
@interface SWWeakMessageHandler : NSObject <SWMessageHandler> {
    <SWMessageHandler> * _messageHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWMessageHandler> *messageHandler;
@property (readonly) Class superclass;

+ (id)handlerWithMessageHandler:(id)arg1;

- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)messageHandler;

@end
