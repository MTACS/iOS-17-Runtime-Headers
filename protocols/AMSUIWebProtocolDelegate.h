
@protocol AMSUIWebProtocolDelegate <NSObject>

@required

- (void)protocolHandler:(AMSUIWebProtocolHandler *)arg1 didEncodeNetworkRequest:(NSMutableURLRequest *)arg2;

@end
