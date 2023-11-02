
@interface IDSSysdiagnoseLogCollector : NSObject

+ (id)sharedInstance;

- (void)_collectSysdiagnoseLog:(id /* block */)arg1;
- (void)collectSysdiagnoseLog:(id /* block */)arg1;
- (id)init;

@end
