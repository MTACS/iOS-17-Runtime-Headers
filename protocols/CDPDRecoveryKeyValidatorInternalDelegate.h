
@protocol CDPDRecoveryKeyValidatorInternalDelegate <NSObject>

@required

- (NSString *)generateRecoveryKeyWithInfo:(NSDictionary *)arg1 error:(id*)arg2;

@end
