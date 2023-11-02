
@protocol SFFlightCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (SFFlight *)flight;
- (NSData *)jsonData;
- (unsigned long long)selectedLegIndex;
- (void)setFlight:(SFFlight *)arg1;
- (void)setSelectedLegIndex:(unsigned long long)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
