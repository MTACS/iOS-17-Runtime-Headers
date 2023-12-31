
@protocol UITextDropRequest <NSObject>

@required

- (UITextPosition *)dropPosition;
- (<UIDropSession> *)dropSession;
- (bool)isSameView;
- (UITextDropProposal *)suggestedProposal;

@end
