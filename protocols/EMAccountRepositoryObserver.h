
@protocol EMAccountRepositoryObserver <NSObject>

@required

- (void)accountsAdded:(NSArray *)arg1;
- (void)accountsChanged:(NSArray *)arg1;
- (void)accountsRemoved:(NSArray *)arg1;
- (void)didBeginObserving;
- (void)didEndObserving;

@end
