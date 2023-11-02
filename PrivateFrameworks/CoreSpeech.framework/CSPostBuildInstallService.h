
@interface CSPostBuildInstallService : NSObject

+ (id)sharedService;

- (void)_performPostBuildInstallWithCompletion:(id /* block */)arg1;
- (void)registerPostBuildInstallService;

@end
