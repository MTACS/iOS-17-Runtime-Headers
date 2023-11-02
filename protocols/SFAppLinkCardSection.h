
@protocol SFAppLinkCardSection <SFTitleCardSection>

@required

- (NSArray *)appLinks;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setAppLinks:(NSArray *)arg1;

@end
