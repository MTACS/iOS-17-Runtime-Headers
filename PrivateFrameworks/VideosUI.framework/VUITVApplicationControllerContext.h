
@interface VUITVApplicationControllerContext : NSObject <NSCopying> {
    NSURL * _javaScriptApplicationURL;
    NSDictionary * _launchOptions;
}

@property (nonatomic, copy) NSURL *javaScriptApplicationURL;
@property (nonatomic, copy) NSDictionary *launchOptions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)javaScriptApplicationURL;
- (id)launchOptions;
- (void)setJavaScriptApplicationURL:(id)arg1;
- (void)setLaunchOptions:(id)arg1;

@end
