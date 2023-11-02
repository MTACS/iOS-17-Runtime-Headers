
@protocol EDMessageQueryHelperMessageSource

@required

- (NSArray *)messagesWithAdditionalPredicates:(NSArray *)arg1 limit:(long long)arg2;
- (EMQuery *)query;
- (NSArray *)sortableMessagesWithAdditionalPredicates:(NSArray *)arg1 limit:(long long)arg2;

@end
