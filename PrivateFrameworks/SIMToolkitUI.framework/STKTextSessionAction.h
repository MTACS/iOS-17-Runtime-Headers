
@interface STKTextSessionAction : STKSessionAction

@property (nonatomic, readonly) STKTextSessionData *sessionData;

- (id)initWithBehavior:(id)arg1 inputData:(id)arg2 response:(id /* block */)arg3;
- (id)sessionData;

@end
