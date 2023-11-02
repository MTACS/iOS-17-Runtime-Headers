
@protocol SWLogger <NSObject>

@required

- (void)bindValue:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)log:(NSString *)arg1;
- (void)logError:(NSString *)arg1;
- (void)logSensitive:(NSString *)arg1;

@end
