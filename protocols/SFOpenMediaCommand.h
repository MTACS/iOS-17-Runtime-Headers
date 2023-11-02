
@protocol SFOpenMediaCommand <SFCommand>

@required

- (NSString *)clientSelectedBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFMediaMetadata *)mediaMetadata;
- (void)setClientSelectedBundleIdentifier:(NSString *)arg1;
- (void)setMediaMetadata:(SFMediaMetadata *)arg1;

@end
