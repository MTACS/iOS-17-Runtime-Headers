
@protocol HUQuickControlItemPredicate <NSObject>

@required

- (NSArray *)matchingControlItemsForControlItems:(NSArray *)arg1;
- (unsigned long long)maximumNumberOfMatches;

@end