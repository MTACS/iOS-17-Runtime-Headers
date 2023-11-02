
@protocol BURestrictionsProviding <NSObject>

@required

- (void)addObserver:(id <BURestrictionsObserving>)arg1;
- (bool)isAccountModificationAllowed;
- (bool)isBookStoreAllowed;
- (bool)isExplicitContentAllowed;
- (void)removeObserver:(id <BURestrictionsObserving>)arg1;

@end
