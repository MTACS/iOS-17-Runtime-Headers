
@protocol NEProfilePayloadBaseDelegate

@required

- (NSDictionary *)getPreprocessedPayloadContents;
- (id)initWithPayload:(NSDictionary *)arg1;
- (bool)setPostprocessedPayloadContents:(NSDictionary *)arg1;
- (NSError *)validatePayload;

@end
