
@protocol HMEProtoBufferCoding

@required

- (NSData *)encodeToProtoBufferData;
- (id)initWithProtoBufferData:(NSData *)arg1;

@optional

- (id)initClassWithProtoBufferData:(NSData *)arg1;

@end
