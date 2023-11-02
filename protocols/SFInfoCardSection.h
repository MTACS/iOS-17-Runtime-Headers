
@protocol SFInfoCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSArray *)infoTuples;
- (unsigned long long)initiallyVisibleTuples;
- (NSData *)jsonData;
- (void)setInfoTuples:(NSArray *)arg1;
- (void)setInitiallyVisibleTuples:(unsigned long long)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
