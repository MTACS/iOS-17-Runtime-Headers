
@interface CKSpotlightQueryResult : NSObject <QLPreviewItem> {
    CKConversation * _conversation;
    NSString * _identifier;
    CSSearchableItem * _item;
    LPLinkMetadata * _linkMetadata;
}

@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, retain) CSSearchableItem *item;
@property (nonatomic, retain) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) NSString *messageGUID;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)conversation;
- (id)description;
- (id)identifier;
- (id)initWithSearchableItem:(id)arg1 inSection:(id)arg2 withConversation:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (id)item;
- (id)linkMetadata;
- (id)messageGUID;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)setConversation:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLinkMetadata:(id)arg1;

@end
