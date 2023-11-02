
@interface ASMessageHandler : NSObject {
    SEL  _handleErrorSendingMessageAction;
    SEL  _handleReceiveMessageAction;
    Class  _protobufClass;
}

@property (nonatomic) SEL handleErrorSendingMessageAction;
@property (nonatomic) SEL handleReceiveMessageAction;
@property (nonatomic) Class protobufClass;

- (SEL)handleErrorSendingMessageAction;
- (SEL)handleReceiveMessageAction;
- (Class)protobufClass;
- (void)setHandleErrorSendingMessageAction:(SEL)arg1;
- (void)setHandleReceiveMessageAction:(SEL)arg1;
- (void)setProtobufClass:(Class)arg1;

@end
