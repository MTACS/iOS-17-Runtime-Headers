
@protocol CKTranscriptBalloonSelectionManagerDelegate <NSObject>

@required

- (void)selectionManager:(CKTranscriptBalloonSelectionManager *)arg1 didAddChatItem:(CKChatItem *)arg2 selectionState:(CKBalloonSelectionState *)arg3;
- (void)selectionManager:(CKTranscriptBalloonSelectionManager *)arg1 didRemoveChatItem:(CKChatItem *)arg2;
- (void)selectionManagerDidRemoveAllSelectedChatItems:(CKTranscriptBalloonSelectionManager *)arg1;

@end
