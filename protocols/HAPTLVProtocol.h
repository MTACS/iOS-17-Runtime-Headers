
@protocol HAPTLVProtocol <NSObject>

@required

- (bool)parseFromData:(NSData *)arg1 error:(id*)arg2;
- (NSData *)serializeWithError:(id*)arg1;

@end
