
@protocol MobileInstallerDelegateProtocol

@required

- (void)delegateMessageDeliveryCompleteWithError:(NSError *)arg1;
- (void)enumerateAppDictionary:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)reportProgress:(NSDictionary *)arg1;

@end
