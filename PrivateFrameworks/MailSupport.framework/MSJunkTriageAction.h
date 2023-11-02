
@interface MSJunkTriageAction : MSMoveTriageAction

@property (nonatomic, readonly) bool hasNonJunkMessages;

+ (bool)hasNonJunkMessagesInSelection:(id)arg1;

- (bool)hasNonJunkMessages;
- (id)initWithMessageListSelection:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 delegate:(id)arg4;

@end
