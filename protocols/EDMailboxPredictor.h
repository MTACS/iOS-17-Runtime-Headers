
@protocol EDMailboxPredictor <NSObject>

@required

- (NSArray *)predictMailboxIDsForMessages:(NSArray *)arg1 limit:(unsigned long long)arg2;

@end
