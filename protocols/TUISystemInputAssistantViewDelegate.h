
@protocol TUISystemInputAssistantViewDelegate <NSObject>

@required

- (void)systemInputAssistantView:(TUISystemInputAssistantView *)arg1 wantsToShowCollapsedItemGroup:(UIBarButtonItemGroup *)arg2 fromView:(UIView *)arg3;

@optional

- (void)systemInputAssistantView:(TUISystemInputAssistantView *)arg1 didExpand:(bool)arg2;
- (void)systemInputAssistantView:(TUISystemInputAssistantView *)arg1 willExpand:(bool)arg2;

@end
