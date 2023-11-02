
@interface SFBrowserApplication : UIApplication <UIApplicationDelegate> {
    <SFBrowserApplicationProxy> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SFBrowserApplicationProxy> *proxy;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

+ (void)initialize;

- (void).cxx_destruct;
- (id)proxy;

@end
