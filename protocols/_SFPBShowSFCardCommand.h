
@protocol _SFPBShowSFCardCommand <NSObject>

@required

- (_SFPBCard *)card;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCard:(_SFPBCard *)arg1;

@end
