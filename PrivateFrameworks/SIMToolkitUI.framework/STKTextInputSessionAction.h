
@interface STKTextInputSessionAction : STKSessionAction

@property (nonatomic, readonly) STKTextInputSessionData *sessionData;

- (id)initWithBehavior:(id)arg1 inputData:(id)arg2 response:(id /* block */)arg3;
- (void)sendSuccessWithResponse:(id)arg1;
- (id)sessionData;

@end
