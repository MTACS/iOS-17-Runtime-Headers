
@protocol ICQCommerceRemoteUIDelegateDelegate <NSObject>

@required

- (void)commerceDelegate:(ICQCommerceRemoteUIDelegate *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)commerceDelegate:(ICQCommerceRemoteUIDelegate *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)commerceDelegate:(ICQCommerceRemoteUIDelegate *)arg1 willPresentObjectModel:(RUIObjectModel *)arg2 page:(RUIPage *)arg3;
- (void)commerceDelegateDidCancel:(ICQCommerceRemoteUIDelegate *)arg1;

@end
