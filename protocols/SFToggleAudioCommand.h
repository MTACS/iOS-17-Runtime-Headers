
@protocol SFToggleAudioCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)localMediaIdentifier;
- (int)mediaEntityType;
- (NSString *)persistentIdentifier;
- (void)setLocalMediaIdentifier:(NSString *)arg1;
- (void)setMediaEntityType:(int)arg1;
- (void)setPersistentIdentifier:(NSString *)arg1;
- (void)setUniversalLibraryIdentifier:(NSString *)arg1;
- (NSString *)universalLibraryIdentifier;

@end
