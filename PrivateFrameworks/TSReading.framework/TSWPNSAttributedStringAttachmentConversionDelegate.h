
@interface TSWPNSAttributedStringAttachmentConversionDelegate : NSObject <TSWPNSAttributedStringAttachmentConversionDelegate> {
    bool  mConvertAttachments;
    bool  mConvertHyperlinks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)attachmentStringForDrawableAttachment:(id)arg1;
- (id)init;
- (id)initWithConvertHyperlinks:(bool)arg1 convertGraphicalAttachments:(bool)arg2;
- (id)urlForHyperlinkField:(id)arg1;

@end
