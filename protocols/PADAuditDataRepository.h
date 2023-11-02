
@protocol PADAuditDataRepository <NSObject>

@required

- (void)storeClassifierResult:(PADClassifierResult *)arg1 imageData:(NSData *)arg2 signature:(NSData *)arg3 flags:(NSData *)arg4;
- (void)storeFACPoseBuffer:(struct __CVBuffer { }*)arg1 identifier:(NSString *)arg2 values:(NSDictionary *)arg3;
- (void)storePRDBuffer:(struct __CVBuffer { }*)arg1 name:(NSString *)arg2;
- (void)storeTAValues:(NSDictionary *)arg1;
- (void)storeUnencryptedVideoFrom:(NSURL *)arg1;

@end
