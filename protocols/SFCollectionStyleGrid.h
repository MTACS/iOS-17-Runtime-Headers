
@protocol SFCollectionStyleGrid <SFCollectionStyle>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (unsigned long long)numberOfColumns;
- (void)setNumberOfColumns:(unsigned long long)arg1;

@end
