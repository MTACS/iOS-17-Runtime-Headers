
@protocol SFShowSFCardCommand <SFCommand>

@required

- (SFCard *)card;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setCard:(SFCard *)arg1;

@end
