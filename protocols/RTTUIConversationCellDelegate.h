
@protocol RTTUIConversationCellDelegate <NSObject>

@required

- (TUCall *)currentCall;
- (bool)isCurrentCallConnected;

@end
