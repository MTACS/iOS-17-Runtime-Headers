
@protocol ATMessageLinkListenerDelegate <NSObject>

@required

- (void)listener:(ATMessageLinkListener *)arg1 didReceiveMessageLinkRequest:(ATMessageLink *)arg2;

@end
