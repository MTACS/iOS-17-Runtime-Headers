
@protocol SFMaskGenerationFunction <NSObject, NSCopying, NSSecureCoding>

@required

- (NSData *)generateMaskWithLength:(long long)arg1 data:(NSData *)arg2 error:(NSError *)arg3;

@end
