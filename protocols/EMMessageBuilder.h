
@protocol EMMessageBuilder <EMMutableContentItem, EMBaseMessageListItemBuilder>

@required

- (NSUUID *)documentID;
- (void)setDocumentID:(NSUUID *)arg1;

@end
