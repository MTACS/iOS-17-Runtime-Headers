
@protocol TRINamespaceUpdateProtocol <NSObject>

@required

- (unsigned int)namespaceId;
- (NSString *)namespaceName;
- (<TRINotificationToken> *)token;

@end
