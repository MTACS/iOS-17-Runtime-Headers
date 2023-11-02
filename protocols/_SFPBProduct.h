
@protocol _SFPBProduct <NSObject>

@required

- (_SFPBURL *)availabilityURL;
- (bool)buyable;
- (NSString *)displayName;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)productIdentifier;
- (void)setAvailabilityURL:(_SFPBURL *)arg1;
- (void)setBuyable:(bool)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setProductIdentifier:(NSString *)arg1;

@end
