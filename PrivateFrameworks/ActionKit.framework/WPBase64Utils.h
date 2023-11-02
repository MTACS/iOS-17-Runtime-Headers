
@interface WPBase64Utils : NSObject

+ (id)decodeString:(id)arg1;
+ (id)encodeData:(id)arg1;
+ (void)encodeFileHandle:(id)arg1 withChunkHandler:(id /* block */)arg2;
+ (void)encodeInputStream:(id)arg1 withChunkHandler:(id /* block */)arg2;

@end
