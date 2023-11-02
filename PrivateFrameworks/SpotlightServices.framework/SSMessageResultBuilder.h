
@interface SSMessageResultBuilder : SSResultBuilder {
    NSArray * _attachmentNames;
    NSArray * _attachmentPaths;
    NSArray * _attachmentTypes;
    NSString * _groupDisplayName;
    NSString * _groupPhotoPath;
    NSString * _message;
    NSString * _messageId;
    NSArray * _recipientContactIds;
    NSArray * _recipients;
    NSDate * _sendDate;
    NSArray * _senderContactIds;
    NSArray * _senders;
}

@property (nonatomic, retain) NSArray *attachmentNames;
@property (nonatomic, retain) NSArray *attachmentPaths;
@property (nonatomic, retain) NSArray *attachmentTypes;
@property (nonatomic, retain) NSString *groupDisplayName;
@property (nonatomic, retain) NSString *groupPhotoPath;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic, retain) NSArray *recipientContactIds;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, retain) NSDate *sendDate;
@property (nonatomic, retain) NSArray *senderContactIds;
@property (nonatomic, retain) NSArray *senders;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)attachmentNames;
- (id)attachmentPaths;
- (id)attachmentTypes;
- (id)buildAttachmentSummary;
- (id)buildAttachmentThumbnail;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)groupDisplayName;
- (id)groupPhotoPath;
- (id)initWithResult:(id)arg1;
- (id)message;
- (id)messageId;
- (id)recipientContactIds;
- (id)recipients;
- (id)sendDate;
- (id)senderContactIds;
- (id)senders;
- (void)setAttachmentNames:(id)arg1;
- (void)setAttachmentPaths:(id)arg1;
- (void)setAttachmentTypes:(id)arg1;
- (void)setGroupDisplayName:(id)arg1;
- (void)setGroupPhotoPath:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setRecipientContactIds:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSendDate:(id)arg1;
- (void)setSenderContactIds:(id)arg1;
- (void)setSenders:(id)arg1;

@end
