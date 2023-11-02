
@protocol SFButtonListCardSection <SFCardSection>

@required

- (NSString *)SectionTitle;
- (NSArray *)buttons;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setButtons:(NSArray *)arg1;
- (void)setSectionTitle:(NSString *)arg1;
- (void)setShowMoreButtonTitle:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)showMoreButtonTitle;
- (NSString *)type;

@end
