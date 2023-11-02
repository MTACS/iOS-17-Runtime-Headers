
@protocol _DPDediscoRecordProtocol <NSObject>

@required

- (long long)dimension;
- (NSDictionary *)metadata;
- (NSData *)share1;
- (NSData *)share2;

@end
