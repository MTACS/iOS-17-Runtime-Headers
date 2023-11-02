
@protocol TIKBUserModeling <TIUserModeling, TITypingSessionAggregatedEventObserver>

@required

- (NSArray *)kbContexts;

@end
