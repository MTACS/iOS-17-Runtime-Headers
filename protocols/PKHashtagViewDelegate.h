
@protocol PKHashtagViewDelegate <NSObject>

@required

- (void)hashtagView:(PKHashtagView *)arg1 registerCommand:(PKUndoCommand *)arg2;
- (void)hashtagViewDidActivateHashtag:(PKHashtagView *)arg1;
- (void)hashtagViewDidDeactivateHashtag:(PKHashtagView *)arg1;
- (void)hashtagViewWillDeactivateHashtag:(PKHashtagView *)arg1;

@end
