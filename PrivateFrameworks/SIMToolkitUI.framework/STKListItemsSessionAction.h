
@interface STKListItemsSessionAction : STKTextSessionAction

@property (nonatomic, readonly) STKListItemsSessionData *sessionData;

- (id)initWithBehavior:(id)arg1 inputData:(id)arg2 response:(id /* block */)arg3;
- (void)sendSuccessWithSelectedItemIndex:(unsigned long long)arg1;
- (id)sessionData;

@end
