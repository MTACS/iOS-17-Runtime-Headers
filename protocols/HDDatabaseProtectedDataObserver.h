
@protocol HDDatabaseProtectedDataObserver <NSObject>

@required

- (void)database:(id <HDHealthDatabase>)arg1 protectedDataDidBecomeAvailable:(bool)arg2;

@end
