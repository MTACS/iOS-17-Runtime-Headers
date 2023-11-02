
@interface TVStoreApplicationSetupHelper : NSObject {
    IKURLBagCache * _bagCache;
    NSURL * _defaultBootURL;
}

@property (nonatomic, readonly) IKURLBagCache *bagCache;
@property (nonatomic, copy) NSURL *defaultBootURL;

+ (id)_parsedQueryParametersForURL:(id)arg1;
+ (id)bootURLWithBagBootURL:(id)arg1 defaultBootURL:(id)arg2;
+ (id)defaultBagBootLaunchContextWithOptions:(id)arg1 useCache:(bool)arg2;
+ (id)fallbackBootURL;
+ (id)launchContextWithLaunchOptions:(id)arg1 bagBootURLKey:(id)arg2 useCache:(bool)arg3;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 appLocalBootURL:(id)arg3;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 bagBootURLKey:(id)arg3 useCache:(bool)arg4;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 useCache:(bool)arg3;
+ (id)preferredBootURL;

- (void).cxx_destruct;
- (id)bagCache;
- (id)defaultBootURL;
- (id)init;
- (id)initWithDefaultBootURL:(id)arg1;
- (id)initWithDefaultBootURL:(id)arg1 bagCache:(id)arg2;
- (void)obtainBootURLWithCompletion:(id /* block */)arg1;
- (void)setDefaultBootURL:(id)arg1;

@end
