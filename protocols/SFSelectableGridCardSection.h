
@protocol SFSelectableGridCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSArray *)entries;
- (NSNumber *)initialSelectedIndex;
- (NSData *)jsonData;
- (void)setEntries:(NSArray *)arg1;
- (void)setInitialSelectedIndex:(NSNumber *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
