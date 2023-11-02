
@protocol _SFPBToggleAudioCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
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
