
@protocol WBSParsecSearchGenericResult

@required

- (WBSParsecAuxiliaryInfo *)auxiliaryInfo;
- (NSArray *)descriptionRichTexts;
- (NSString *)footnote;
- (NSString *)secondaryTitle;
- (WBSParsecImageRepresentation *)secondaryTitleGlyph;
- (WBSParsecImageRepresentation *)thumbnail;
- (UIImage *)thumbnailWithSession:(id <WBSParsecSearchSession>)arg1;
- (NSNumber *)titleMaximumLines;

@end
