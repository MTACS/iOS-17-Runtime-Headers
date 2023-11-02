
@protocol OZSimplyCodable <NSObject>

@required

+ (id)simplyDecodeFromData:(NSData *)arg1 error:(out id*)arg2;

- (NSData *)simplyEncode:(out id*)arg1;

@end
