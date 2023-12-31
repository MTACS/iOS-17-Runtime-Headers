
@protocol SFDigestOperation <NSObject, NSCopying, NSSecureCoding>

@required

+ (long long)blockSize;
+ (NSData *)digest:(NSData *)arg1;
+ (long long)outputSize;

- (void)addData:(NSData *)arg1;
- (NSData *)hashValue;

@end
