
@protocol CKPinnedConversationViewDelegate <NSObject>

@required

- (void)pinnedConversationView:(CKPinnedConversationView *)arg1 didUpdateWithActivitySnapshot:(CKPinnedConversationActivitySnapshot *)arg2;
- (CKPinnedConversationActivitySnapshot *)previousPinnedConversationActivitySnapshotForConversation:(CKConversation *)arg1;

@end
