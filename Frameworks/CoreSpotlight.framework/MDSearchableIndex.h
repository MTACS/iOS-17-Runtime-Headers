
@interface MDSearchableIndex : CSSearchableIndex

+ (id)sharedInstance;

- (void)indexSearchableItems:(id)arg1 stateInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performIndexJob:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(id /* block */)arg3;

@end
