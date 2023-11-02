
@protocol _SFPBShowContactCardCommand <NSObject>

@required

- (NSString *)contactIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isSuggestedContact;
- (NSData *)jsonData;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setIsSuggestedContact:(bool)arg1;

@end
