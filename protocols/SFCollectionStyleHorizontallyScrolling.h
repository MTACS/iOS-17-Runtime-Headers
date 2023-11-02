
@protocol SFCollectionStyleHorizontallyScrolling <SFCollectionStyle>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (unsigned long long)numberOfRows;
- (void)setNumberOfRows:(unsigned long long)arg1;

@end
