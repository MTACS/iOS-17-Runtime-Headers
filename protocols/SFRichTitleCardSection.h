
@protocol SFRichTitleCardSection <SFTitleCardSection>

@required

- (NSNumber *)auxiliaryAlignment;
- (NSString *)auxiliaryBottomText;
- (int)auxiliaryBottomTextColor;
- (NSString *)auxiliaryMiddleText;
- (NSString *)auxiliaryTopText;
- (NSArray *)buttonItems;
- (NSString *)contentAdvisory;
- (NSString *)descriptionText;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)footnote;
- (bool)hideVerticalDivider;
- (SFImage *)imageOverlay;
- (NSData *)jsonData;
- (NSArray *)moreGlyphs;
- (NSArray *)offers;
- (SFActionItem *)playAction;
- (int)playActionAlign;
- (NSNumber *)rating;
- (NSString *)ratingText;
- (SFImage *)reviewGlyph;
- (bool)reviewNewLine;
- (NSString *)reviewText;
- (SFRichText *)richSubtitle;
- (void)setAuxiliaryAlignment:(NSNumber *)arg1;
- (void)setAuxiliaryBottomText:(NSString *)arg1;
- (void)setAuxiliaryBottomTextColor:(int)arg1;
- (void)setAuxiliaryMiddleText:(NSString *)arg1;
- (void)setAuxiliaryTopText:(NSString *)arg1;
- (void)setButtonItems:(NSArray *)arg1;
- (void)setContentAdvisory:(NSString *)arg1;
- (void)setDescriptionText:(NSString *)arg1;
- (void)setFootnote:(NSString *)arg1;
- (void)setHideVerticalDivider:(bool)arg1;
- (void)setImageOverlay:(SFImage *)arg1;
- (void)setMoreGlyphs:(NSArray *)arg1;
- (void)setOffers:(NSArray *)arg1;
- (void)setPlayAction:(SFActionItem *)arg1;
- (void)setPlayActionAlign:(int)arg1;
- (void)setRating:(NSNumber *)arg1;
- (void)setRatingText:(NSString *)arg1;
- (void)setReviewGlyph:(SFImage *)arg1;
- (void)setReviewNewLine:(bool)arg1;
- (void)setReviewText:(NSString *)arg1;
- (void)setRichSubtitle:(SFRichText *)arg1;
- (void)setSubtitleIsEmphasized:(bool)arg1;
- (void)setThumbnailCropCircle:(bool)arg1;
- (void)setTitleAlign:(int)arg1;
- (void)setTitleImage:(SFImage *)arg1;
- (void)setTitleNoWrap:(bool)arg1;
- (void)setTitleWeight:(NSNumber *)arg1;
- (bool)subtitleIsEmphasized;
- (bool)thumbnailCropCircle;
- (int)titleAlign;
- (SFImage *)titleImage;
- (bool)titleNoWrap;
- (NSNumber *)titleWeight;

@end
