
@protocol DESMetadataEncoder

@required

- (NSData *)encodeNumber:(NSNumber *)arg1 toLength:(unsigned long long)arg2;
- (NSData *)encodeNumberVector:(NSArray *)arg1 toLength:(unsigned long long)arg2;
- (NSData *)encodeString:(NSString *)arg1 toLength:(unsigned long long)arg2;
- (NSData *)encodeStringVector:(NSArray *)arg1 toLength:(unsigned long long)arg2;
- (NSData *)zeroWithLength:(unsigned long long)arg1;

@end
