
@protocol HDSyncCodable <NSObject>

@required

- (NSData *)data;
- (long long)encodedByteCount;
- (id)initWithData:(NSData *)arg1;

@end
