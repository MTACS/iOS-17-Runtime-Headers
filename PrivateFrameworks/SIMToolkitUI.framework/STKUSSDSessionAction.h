
@interface STKUSSDSessionAction : STKSessionAction

@property (nonatomic, readonly) STKUSSDSessionData *sessionData;

- (id)initWithInputData:(id)arg1 response:(id /* block */)arg2;
- (void)sendSuccessWithResponse:(id)arg1;
- (id)sessionData;

@end
