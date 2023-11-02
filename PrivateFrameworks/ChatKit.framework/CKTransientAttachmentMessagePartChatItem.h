
@interface CKTransientAttachmentMessagePartChatItem : CKAttachmentMessagePartChatItem {
    NSString * _parentGUID;
}

@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, retain) NSString *parentGUID;

- (void).cxx_destruct;
- (id)IMChatItem;
- (id)initWithParentChatItem:(id)arg1;
- (id)parentGUID;
- (void)setParentGUID:(id)arg1;

@end
