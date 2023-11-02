
@protocol SFDetailedRowCardSection <SFCardSection>

@required

- (SFActionItem *)action;
- (SFButton *)button;
- (NSArray *)buttonItems;
- (bool)buttonItemsAreTrailing;
- (NSArray *)descriptions;
- (NSDictionary *)dictionaryRepresentation;
- (SFRichText *)footnote;
- (bool)isSecondaryTitleDetached;
- (NSData *)jsonData;
- (bool)preventThumbnailImageScaling;
- (SFRichText *)richTrailingBottomText;
- (SFRichText *)richTrailingMiddleText;
- (SFRichText *)richTrailingTopText;
- (SFFormattedText *)secondaryTitle;
- (SFImage *)secondaryTitleImage;
- (void)setAction:(SFActionItem *)arg1;
- (void)setButton:(SFButton *)arg1;
- (void)setButtonItems:(NSArray *)arg1;
- (void)setButtonItemsAreTrailing:(bool)arg1;
- (void)setDescriptions:(NSArray *)arg1;
- (void)setFootnote:(SFRichText *)arg1;
- (void)setIsSecondaryTitleDetached:(bool)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setRichTrailingBottomText:(SFRichText *)arg1;
- (void)setRichTrailingMiddleText:(SFRichText *)arg1;
- (void)setRichTrailingTopText:(SFRichText *)arg1;
- (void)setSecondaryTitle:(SFFormattedText *)arg1;
- (void)setSecondaryTitleImage:(SFImage *)arg1;
- (void)setShouldUseCompactDisplay:(bool)arg1;
- (void)setThumbnail:(SFImage *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setTopText:(SFRichText *)arg1;
- (void)setTrailingBottomText:(SFFormattedText *)arg1;
- (void)setTrailingMiddleText:(SFFormattedText *)arg1;
- (void)setTrailingThumbnail:(SFImage *)arg1;
- (void)setTrailingTopText:(SFFormattedText *)arg1;
- (void)setType:(NSString *)arg1;
- (bool)shouldUseCompactDisplay;
- (SFImage *)thumbnail;
- (SFRichText *)title;
- (SFRichText *)topText;
- (SFFormattedText *)trailingBottomText;
- (SFFormattedText *)trailingMiddleText;
- (SFImage *)trailingThumbnail;
- (SFFormattedText *)trailingTopText;
- (NSString *)type;

@end
