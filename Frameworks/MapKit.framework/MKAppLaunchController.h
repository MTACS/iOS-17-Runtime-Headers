
@interface MKAppLaunchController : NSObject {
    NSString * _webURLString;
    NSURL * webURL;
}

@property (nonatomic, retain) NSURL *webURL;

+ (void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 usingTarget:(int)arg3 completionHandler:(id /* block */)arg4;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)lookUpAppStoreURLForBundle:(id)arg1 usingTarget:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)setWebURL:(id)arg1;
- (id)webURL;

@end
