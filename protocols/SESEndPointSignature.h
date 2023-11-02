
@protocol SESEndPointSignature

@required

+ (id)responseWithSignedData:(NSData *)arg1 signature:(NSData *)arg2;
+ (id)signature:(NSData *)arg1;

@end
