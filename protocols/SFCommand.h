
@protocol SFCommand <NSObject>

@required

- (NSData *)backendData;
- (NSString *)commandDetail;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFTopic *)normalizedTopic;
- (void)setBackendData:(NSData *)arg1;
- (void)setCommandDetail:(NSString *)arg1;
- (void)setNormalizedTopic:(SFTopic *)arg1;

@end
