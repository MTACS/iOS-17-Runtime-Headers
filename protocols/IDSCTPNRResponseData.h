
@protocol IDSCTPNRResponseData <NSObject>

@required

- (NSString *)phoneBookNumber;
- (NSString *)phoneNumber;
- (NSData *)signature;
- (NSString *)status;
- (bool)success;

@end
