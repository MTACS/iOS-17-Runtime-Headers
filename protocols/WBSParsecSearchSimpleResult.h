
@protocol WBSParsecSearchSimpleResult <WBSParsecSearchResultPresentedInCard, WBSParsecSearchMapsResultFeedbackSenderClient>

@required

- (NSString *)descriptionLeadInText;
- (NSNumber *)descriptionMaximumNumberOfLines;
- (bool)descriptionTextCanWrap;
- (NSString *)footnote;
- (bool)hasSingleLineDescriptionAndTitle;
- (UIImage *)titleGlyphWithSession:(id <WBSParsecSearchSession>)arg1;
- (NSNumber *)titleMaximumNumberOfLines;

@end
