
@interface SCMLTextProvider : NSObject

+ (id)defaultTextProvider;
+ (void)setDefaultTextProvider:(id)arg1;

- (void)provideTextItemsWithConversationIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 progressHandler:(id /* block */)arg4;

@end
