
@protocol SFShowContactCardCommand <SFCommand>

@required

- (NSString *)contactIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isSuggestedContact;
- (NSData *)jsonData;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setIsSuggestedContact:(bool)arg1;

@end
