
@protocol DBNavigationStateObserving <NSObject>

@required

- (void)navigationStateProvider:(DBNavigationStateProvider *)arg1 frontmostIdentifierDidChange:(NSString *)arg2;
- (void)navigationStateProvider:(DBNavigationStateProvider *)arg1 navigatingIdentifiersDidChange:(NSArray *)arg2;

@end
