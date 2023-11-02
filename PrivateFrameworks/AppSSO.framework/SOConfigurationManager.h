
@interface SOConfigurationManager : NSObject

+ (id)defaultManager;

- (id)init;
- (void)saveConfigurationData:(id)arg1 completion:(id /* block */)arg2;

@end
