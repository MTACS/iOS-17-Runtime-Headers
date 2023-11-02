
@interface IDSTransactionLogTaskHandler : NSObject

+ (id)handlerWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

- (id)_init;
- (void)perform;

@end
