
@protocol CommerceRemoteUIDelegateDelegate <NSObject>

@required

- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg1 willPresentObjectModel:(RUIObjectModel *)arg2 page:(RUIPage *)arg3;
- (void)commerceDelegateDidCancel:(CommerceRemoteUIDelegate *)arg1;

@end
