
@protocol EDClientStateReporting <NSObject>

@required

- (bool)isForeground;
- (bool)isRunningTests;
- (NSArray *)visibleMailboxObjectIDs;

@end
