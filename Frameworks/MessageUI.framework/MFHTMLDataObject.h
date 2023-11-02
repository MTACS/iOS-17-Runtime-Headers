
@interface MFHTMLDataObject : NSObject {
    ECHTMLStringAndMIMECharset * _htmlString;
    NSArray * _otherHTMLStringsAndAttachments;
    MFPlainTextDocument * _plainTextAlternative;
    MFQuotedAttachmentsInfo * _quotedAttachmentsInfo;
}

@property (nonatomic, readonly) ECHTMLStringAndMIMECharset *htmlString;
@property (nonatomic, readonly) NSArray *otherHTMLStringsAndAttachments;
@property (nonatomic, readonly) MFPlainTextDocument *plainTextAlternative;
@property (nonatomic, readonly) MFQuotedAttachmentsInfo *quotedAttachmentsInfo;

- (void).cxx_destruct;
- (id)htmlString;
- (id)initWithHTMLString:(id)arg1 otherHTMLStringsAndAttachments:(id)arg2 plainTextAlternative:(id)arg3 quotedAttachmentsInfo:(id)arg4;
- (id)otherHTMLStringsAndAttachments;
- (id)plainTextAlternative;
- (id)quotedAttachmentsInfo;

@end
