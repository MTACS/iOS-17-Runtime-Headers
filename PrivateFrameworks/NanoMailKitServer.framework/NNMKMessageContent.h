
@interface NNMKMessageContent : NSObject <NSSecureCoding> {
    NSArray * _attachments;
    NSString * _externalReferenceId;
    bool  _hasTextData;
    NSData * _htmlContentData;
    bool  _mainAlternativeValid;
    NSString * _messageId;
    unsigned long long  _originalContentSize;
    bool  _partiallyLoaded;
    NSData * _textData;
}

@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) NSString *externalReferenceId;
@property (nonatomic) bool hasTextData;
@property (nonatomic, retain) NSData *htmlContentData;
@property (nonatomic, readonly) bool isHTML;
@property (nonatomic) bool mainAlternativeValid;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic) unsigned long long originalContentSize;
@property (nonatomic) bool partiallyLoaded;
@property (nonatomic, retain) NSData *textData;

+ (id)classesForUnarchivingTextData;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalReferenceId;
- (bool)hasTextData;
- (id)htmlContentData;
- (id)initWithCoder:(id)arg1;
- (bool)isHTML;
- (bool)mainAlternativeValid;
- (id)messageId;
- (unsigned long long)originalContentSize;
- (bool)partiallyLoaded;
- (void)setAttachments:(id)arg1;
- (void)setExternalReferenceId:(id)arg1;
- (void)setHasTextData:(bool)arg1;
- (void)setHtmlContentData:(id)arg1;
- (void)setMainAlternativeValid:(bool)arg1;
- (void)setMessageId:(id)arg1;
- (void)setOriginalContentSize:(unsigned long long)arg1;
- (void)setPartiallyLoaded:(bool)arg1;
- (void)setTextData:(id)arg1;
- (id)textData;

@end
