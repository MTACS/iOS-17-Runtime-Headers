
@interface _GDSHMACGenerator : NSObject

+ (id)HMACSignedRequest:(id)arg1 secret:(id)arg2 secretVersion:(id)arg3;
+ (id)HMAC_SHA256Digest:(id)arg1 key:(id)arg2;
+ (id)SHA256_HashStringFromData:(id)arg1;
+ (id)bucketedEpochTimeStamp;
+ (id)encodeStringToBase64:(id)arg1;
+ (id)generateURLRequest:(id)arg1 secretVersion:(id)arg2 signature:(id)arg3 content:(id)arg4 timestamp:(id)arg5;

@end
