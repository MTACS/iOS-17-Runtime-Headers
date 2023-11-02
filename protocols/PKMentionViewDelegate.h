
@protocol PKMentionViewDelegate <NSObject>

@required

- (void)mentionView:(PKMentionView *)arg1 registerCommand:(PKUndoCommand *)arg2;
- (void)mentionViewDidActivateMention:(PKMentionView *)arg1 withParticpant:(PKMentionParticipant *)arg2;
- (void)mentionViewDidDeactivateMention:(PKMentionView *)arg1;
- (void)mentionViewWillDeactivateMention:(PKMentionView *)arg1;

@end
