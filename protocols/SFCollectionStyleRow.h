
@protocol SFCollectionStyleRow <SFCollectionStyle>

@required

- (NSDictionary *)dictionaryRepresentation;
- (bool)drawPlattersIfNecessary;
- (NSData *)jsonData;
- (void)setDrawPlattersIfNecessary:(bool)arg1;

@end
