
@protocol SFMediaRemoteControlCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)playbackBundleIdentifier;
- (NSString *)playbackRouteUniqueIdentifier;
- (bool)playbackRouteUniqueIdentifierIsEncrypted;
- (void)setPlaybackBundleIdentifier:(NSString *)arg1;
- (void)setPlaybackRouteUniqueIdentifier:(NSString *)arg1;
- (void)setPlaybackRouteUniqueIdentifierIsEncrypted:(bool)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
