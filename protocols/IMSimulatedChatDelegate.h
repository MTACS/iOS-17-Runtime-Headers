
@protocol IMSimulatedChatDelegate <NSObject>

@required

- (void)simulatedChat:(IMSimulatedChat *)arg1 didHandleItem:(IMMessageItem *)arg2;
- (void)simulatedChat:(IMSimulatedChat *)arg1 didSendMessage:(IMMessageItem *)arg2;

@end
