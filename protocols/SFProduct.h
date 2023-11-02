
@protocol SFProduct <NSObject>

@required

- (NSURL *)availabilityURL;
- (bool)buyable;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)displayName;
- (NSString *)identifier;
- (NSData *)jsonData;
- (NSString *)productIdentifier;
- (void)setAvailabilityURL:(NSURL *)arg1;
- (void)setBuyable:(bool)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setProductIdentifier:(NSString *)arg1;

@end
