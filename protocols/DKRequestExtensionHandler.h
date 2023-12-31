
@protocol DKRequestExtensionHandler <NSObject>

@required

- (void)cancelWithError:(NSError *)arg1;
- (void)complete;
- (<NSCopying> *)extensionRequestIdentifier;
- (void)interrupt;
- (<NSCopying> *)requestIdentifier;

@end
