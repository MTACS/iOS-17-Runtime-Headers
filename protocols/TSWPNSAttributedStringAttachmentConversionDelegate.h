
@protocol TSWPNSAttributedStringAttachmentConversionDelegate <NSObject>

@optional

- (NSAttributedString *)attachmentStringForDrawableAttachment:(TSWPAttachment *)arg1;
- (NSAttributedString *)textualEquivalentForDrawableAttachment:(TSWPAttachment *)arg1 withString:(NSString *)arg2 atCharIndex:(unsigned long long)arg3;
- (NSURL *)urlForHyperlinkField:(TSWPHyperlinkField *)arg1;

@end
