
@protocol SFSplitCardSection <SFCardSection>

@required

- (SFRichText *)body;
- (SFRichText *)bottomTitle;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSArray *)listItems;
- (NSString *)listMoreString;
- (NSString *)listPrefix;
- (SFRichText *)secondaryTopTitle;
- (void)setBody:(SFRichText *)arg1;
- (void)setBottomTitle:(SFRichText *)arg1;
- (void)setListItems:(NSArray *)arg1;
- (void)setListMoreString:(NSString *)arg1;
- (void)setListPrefix:(NSString *)arg1;
- (void)setSecondaryTopTitle:(SFRichText *)arg1;
- (void)setTopTitle:(SFRichText *)arg1;
- (SFRichText *)topTitle;

@end
