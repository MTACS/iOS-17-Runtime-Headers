
@interface DocumentUnderstanding.DUDocumentMessageData : NSObject <NSCoding, NSCopying> {
    void attachmentFileName;
    void attachmentFilePath;
    void conversationIdentifier;
    void creatorHandle;
    void recipientHandles;
    void recipientNames;
}

@property (nonatomic, copy) NSString *attachmentFileName;
@property (nonatomic, copy) NSString *attachmentFilePath;
@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, copy) NSString *creatorHandle;
@property (nonatomic, copy) NSArray *recipientHandles;
@property (nonatomic, copy) NSArray *recipientNames;

- (void).cxx_destruct;
- (id)attachmentFileName;
- (id)attachmentFilePath;
- (id)conversationIdentifier;
- (id)copyWithZone:(void*)arg1;
- (id)creatorHandle;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)recipientHandles;
- (id)recipientNames;
- (void)setAttachmentFileName:(id)arg1;
- (void)setAttachmentFilePath:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setCreatorHandle:(id)arg1;
- (void)setRecipientHandles:(id)arg1;
- (void)setRecipientNames:(id)arg1;

@end
