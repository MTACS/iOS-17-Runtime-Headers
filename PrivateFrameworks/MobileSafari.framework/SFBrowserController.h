
@interface SFBrowserController : UIResponder <UISceneDelegate> {
    <SFBrowserControllerProxy> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SFBrowserControllerProxy> *proxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)proxy;
- (void)setProxy:(id)arg1;

@end
