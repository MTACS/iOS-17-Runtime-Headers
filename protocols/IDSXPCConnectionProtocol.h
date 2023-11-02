
@protocol IDSXPCConnectionProtocol <NSObject>

@required

- (void)cancel;
- (void)resume;

@end
