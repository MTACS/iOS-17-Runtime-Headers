
@protocol AKLoginPresenterHostInterfaceProtocol <NSObject>

@required

- (void)authenticationRequestFinishedWithResults:(NSString *)arg1 password:(NSString *)arg2 additionalData:(NSDictionary *)arg3 error:(NSError *)arg4;

@end
