
@protocol VCControlChannelMessageProtocol <NSObject>

@required

- (NSData *)VCCCData;
- (bool)VCCCGetBytes:(char *)arg1 size:(unsigned int)arg2;
- (unsigned long long)VCCCLength;
- (NSString *)VCCCPayloadKey;
- (NSString *)VCCCString;

@end
