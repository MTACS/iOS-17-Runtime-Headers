
@protocol SEEndPointPrivacyEncryptResponse

@required

+ (id)responseWithCipherText:(NSData *)arg1 ephemeralPublicKeyData:(NSData *)arg2 receiverPublicKeyHash:(NSData *)arg3;

@end
