
@interface UVServiceHubMessage : NSObject {
    NSString * _messageType;
    NSObject<NSSecureCoding> * _payload;
    id /* block */  _replyHandler;
}

@property (nonatomic, readonly) NSString *messageType;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *payload;
@property (nonatomic, readonly) id /* block */ replyHandler;

- (void).cxx_destruct;
- (id)initWithMessageType:(id)arg1 payload:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)messageType;
- (id)payload;
- (id /* block */)replyHandler;

@end
