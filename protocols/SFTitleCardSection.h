
@protocol SFTitleCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (bool)isCentered;
- (NSData *)jsonData;
- (void)setIsCentered:(bool)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;
- (NSString *)type;

@end
