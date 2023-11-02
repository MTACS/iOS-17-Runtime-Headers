
@protocol ICContentKeySessionDelegateProtocol <NSObject>

@optional

- (void)contentKeySession:(ICContentKeySession *)arg1 didFinishProcessingKey:(NSString *)arg2 withResponse:(ICSecureKeyDeliveryResponse *)arg3 error:(NSError *)arg4;

@end
